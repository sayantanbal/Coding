#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <iomanip>
using namespace std;

// Custom Exception Classes
class InsufficientBalanceException : public exception {
    string message;
public:
    InsufficientBalanceException(double balance, double amount) {
        message = "Insufficient balance! Available: Rs. " + to_string(balance) + 
                 ", Requested: Rs. " + to_string(amount);
    }
    const char* what() const noexcept override { return message.c_str(); }
};

class InvalidInputException : public exception {
    string message;
public:
    InvalidInputException(const string& msg) : message("Invalid input: " + msg) {}
    const char* what() const noexcept override { return message.c_str(); }
};

// Base Account class
class Account {
protected:
    string accountNumber, accountHolderName;
    double balance;
    static int totalAccounts;
    
public:
    Account(string accNum, string holderName, double initialBalance = 0.0) {
        if (accNum.empty() || holderName.empty() || initialBalance < 0) {
            throw InvalidInputException("Invalid account parameters");
        }
        accountNumber = accNum;
        accountHolderName = holderName;
        balance = initialBalance;
        totalAccounts++;
    }
    
    virtual ~Account() { totalAccounts--; }
    
    string getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }
    static int getTotalAccounts() { return totalAccounts; }
    
    virtual void deposit(double amount) {
        if (amount <= 0) throw InvalidInputException("Deposit amount must be positive");
        balance += amount;
        cout << "Rs. " << amount << " deposited. New balance: Rs. " << balance << endl;
    }
    
    virtual void withdraw(double amount) {
        if (amount <= 0) throw InvalidInputException("Withdrawal amount must be positive");
        if (amount > balance) throw InsufficientBalanceException(balance, amount);
        balance -= amount;
        cout << "Rs. " << amount << " withdrawn. New balance: Rs. " << balance << endl;
    }
    
    virtual double calculateInterest() const = 0;
    virtual string getAccountType() const = 0;
    
    virtual void displayAccount() const {
        cout << "Account: " << accountNumber << ", Holder: " << accountHolderName 
             << ", Balance: Rs. " << balance << ", Type: " << getAccountType() << endl;
    }
};

int Account::totalAccounts = 0;

// SavingsAccount class
class SavingsAccount : public Account {
    static const double INTEREST_RATE, MIN_BALANCE;
    
public:
    SavingsAccount(string accNum, string holderName, double initialBalance = 1000.0) 
        : Account(accNum, holderName, initialBalance) {
        if (initialBalance < MIN_BALANCE) {
            throw InvalidInputException("Savings account requires minimum Rs. " + to_string(MIN_BALANCE));
        }
    }
    
    void withdraw(double amount) override {
        if (amount <= 0) throw InvalidInputException("Withdrawal amount must be positive");
        if (amount > balance || (balance - amount) < MIN_BALANCE) {
            throw InsufficientBalanceException(balance - MIN_BALANCE, amount);
        }
        balance -= amount;
        cout << "Rs. " << amount << " withdrawn from Savings. Balance: Rs. " << balance << endl;
    }
    
    inline double calculateInterest() const override { return balance * INTEREST_RATE / 100; }
    string getAccountType() const override { return "Savings"; }
};

const double SavingsAccount::INTEREST_RATE = 4.5;
const double SavingsAccount::MIN_BALANCE = 1000.0;

// CurrentAccount class
class CurrentAccount : public Account {
    static const double OVERDRAFT_LIMIT, MAINTENANCE_FEE;
    double overdraftUsed;
    
public:
    CurrentAccount(string accNum, string holderName, double initialBalance = 0.0) 
        : Account(accNum, holderName, initialBalance), overdraftUsed(0.0) {}
    
    void withdraw(double amount) override {
        if (amount <= 0) throw InvalidInputException("Withdrawal amount must be positive");
        
        double available = balance + (OVERDRAFT_LIMIT - overdraftUsed);
        if (amount > available) throw InsufficientBalanceException(available, amount);
        
        if (amount <= balance) {
            balance -= amount;
        } else {
            double overdraftNeeded = amount - balance;
            balance = 0;
            overdraftUsed += overdraftNeeded;
        }
        cout << "Rs. " << amount << " withdrawn from Current. Balance: Rs. " << balance 
             << ", Overdraft Used: Rs. " << overdraftUsed << endl;
    }
    
    void deposit(double amount) override {
        if (amount <= 0) throw InvalidInputException("Deposit amount must be positive");
        
        if (overdraftUsed > 0) {
            if (amount >= overdraftUsed) {
                amount -= overdraftUsed;
                overdraftUsed = 0;
            } else {
                overdraftUsed -= amount;
                amount = 0;
            }
        }
        balance += amount;
        cout << "Deposited to Current. Balance: Rs. " << balance 
             << ", Overdraft Used: Rs. " << overdraftUsed << endl;
    }
    
    inline double calculateInterest() const override { return -MAINTENANCE_FEE; }
    string getAccountType() const override { return "Current"; }
};

const double CurrentAccount::OVERDRAFT_LIMIT = 50000.0;
const double CurrentAccount::MAINTENANCE_FEE = 500.0;

// Bank class
class Bank {
    vector<Account*> accounts;
    
public:
    ~Bank() { for (auto* acc : accounts) delete acc; }
    
    void addAccount(Account* account) {
        accounts.push_back(account);
        cout << "Account " << account->getAccountNumber() << " added!" << endl;
    }
    
    Account* findAccount(const string& accNum) {
        for (auto* acc : accounts) {
            if (acc->getAccountNumber() == accNum) return acc;
        }
        return nullptr;
    }
    
    void performTransaction(const string& accNum, const string& operation, double amount) {
        try {
            Account* acc = findAccount(accNum);
            if (!acc) throw InvalidInputException("Account not found: " + accNum);
            
            if (operation == "deposit") acc->deposit(amount);
            else if (operation == "withdraw") acc->withdraw(amount);
            else throw InvalidInputException("Invalid operation: " + operation);
        } catch (const exception& e) {
            cout << "Transaction failed: " << e.what() << endl;
        }
    }
    
    void displayAllAccounts() const {
        cout << "\n=== All Accounts ===" << endl;
        for (const auto* acc : accounts) acc->displayAccount();
        cout << "Total Accounts: " << Account::getTotalAccounts() << endl;
    }
    
    void calculateMonthlyInterest() {
        cout << "\n=== Monthly Interest/Fee ===" << endl;
        for (auto* acc : accounts) {
            double amount = acc->calculateInterest();
            cout << "Account " << acc->getAccountNumber() << ": " 
                 << (amount >= 0 ? "Interest: Rs. " : "Fee: Rs. ") 
                 << abs(amount) << endl;
        }
    }
};

int main() {
    try {
        Bank bank;
        
        // Create accounts
        bank.addAccount(new SavingsAccount("SAV001", "Alice", 5000.0));
        bank.addAccount(new CurrentAccount("CUR001", "Bob", 10000.0));
        
        // Test transactions
        bank.performTransaction("SAV001", "deposit", 2000.0);
        bank.performTransaction("SAV001", "withdraw", 1500.0);
        bank.performTransaction("CUR001", "withdraw", 55000.0); // Uses overdraft
        
        // Test exceptions
        bank.performTransaction("SAV001", "withdraw", 10000.0); // Should fail
        bank.performTransaction("INVALID", "deposit", 1000.0);  // Should fail
        
        bank.calculateMonthlyInterest();
        bank.displayAllAccounts();
        
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
}