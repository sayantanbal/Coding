#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Base Employee class
class Employee {
protected:
    string name, id;
    double baseSalary;
    static int totalEmployees;

public:
    Employee(string n, string empId, double salary) 
        : name(n), id(empId), baseSalary(salary) {
        totalEmployees++;
    }
    
    virtual ~Employee() { totalEmployees--; }
    
    // Pure virtual functions for polymorphism
    virtual double calculateSalary() const = 0;
    virtual string getEmployeeType() const = 0;
    
    virtual void displayInfo() const {
        cout << "ID: " << id << ", Name: " << name 
             << ", Type: " << getEmployeeType()
             << ", Salary: Rs. " << calculateSalary() << endl;
    }
    
    string getName() const { return name; }
    string getId() const { return id; }
    static int getTotalEmployees() { return totalEmployees; }
};

int Employee::totalEmployees = 0;

// Manager class
class Manager : public Employee {
    double bonus, teamSize;

public:
    Manager(string n, string empId, double salary, double b, double team) 
        : Employee(n, empId, salary), bonus(b), teamSize(team) {}
    
    double calculateSalary() const override {
        return baseSalary + bonus + (teamSize * 1000); // Team management bonus
    }
    
    string getEmployeeType() const override { return "Manager"; }
    
    void displayInfo() const override {
        Employee::displayInfo();
        cout << "  Bonus: Rs. " << bonus << ", Team Size: " << teamSize << endl;
    }
};

// Engineer class
class Engineer : public Employee {
    double overtimeHours, overtimeRate;
    string specialization;

public:
    Engineer(string n, string empId, double salary, double hours, double rate, string spec) 
        : Employee(n, empId, salary), overtimeHours(hours), overtimeRate(rate), specialization(spec) {}
    
    double calculateSalary() const override {
        return baseSalary + (overtimeHours * overtimeRate);
    }
    
    string getEmployeeType() const override { return "Engineer"; }
    
    void displayInfo() const override {
        Employee::displayInfo();
        cout << "  Specialization: " << specialization 
             << ", Overtime: " << overtimeHours << "hrs @ Rs." << overtimeRate << "/hr" << endl;
    }
};

// Intern class
class Intern : public Employee {
    double stipend;
    int duration; // in months

public:
    Intern(string n, string empId, double salary, double stip, int dur) 
        : Employee(n, empId, salary), stipend(stip), duration(dur) {}
    
    double calculateSalary() const override {
        return baseSalary + stipend;
    }
    
    string getEmployeeType() const override { return "Intern"; }
    
    void displayInfo() const override {
        Employee::displayInfo();
        cout << "  Stipend: Rs. " << stipend << ", Duration: " << duration << " months" << endl;
    }
};

// Payroll System class
class PayrollSystem {
    vector<Employee*> employees;

public:
    ~PayrollSystem() {
        for (auto* emp : employees) delete emp;
    }
    
    void addEmployee(Employee* emp) {
        employees.push_back(emp);
        cout << "Employee " << emp->getName() << " added to payroll!" << endl;
    }
    
    void displayAllEmployees() const {
        cout << "\n=== PAYROLL SYSTEM ===\n";
        cout << "Total Employees: " << Employee::getTotalEmployees() << "\n\n";
        
        for (const auto* emp : employees) {
            emp->displayInfo();
            cout << "---" << endl;
        }
    }
    
    void calculateTotalPayroll() const {
        double totalPayroll = 0;
        cout << "\n=== PAYROLL CALCULATION ===\n";
        
        for (const auto* emp : employees) {
            double salary = emp->calculateSalary();
            totalPayroll += salary;
            cout << emp->getName() << " (" << emp->getEmployeeType() 
                 << "): Rs. " << salary << endl;
        }
        
        cout << "\nTotal Payroll: Rs. " << totalPayroll << endl;
        cout << "Average Salary: Rs. " << (totalPayroll / employees.size()) << endl;
    }
    
    void findHighestPaid() const {
        if (employees.empty()) return;
        
        Employee* highest = employees[0];
        for (const auto* emp : employees) {
            if (emp->calculateSalary() > highest->calculateSalary()) {
                highest = const_cast<Employee*>(emp);
            }
        }
        
        cout << "\n=== HIGHEST PAID EMPLOYEE ===\n";
        highest->displayInfo();
    }
};

int main() {
    PayrollSystem payroll;
    
    // Demonstrate runtime polymorphism using base class pointers
    payroll.addEmployee(new Manager("Alice Johnson", "M001", 80000, 15000, 5));
    payroll.addEmployee(new Engineer("Bob Smith", "E001", 60000, 20, 500, "Software"));
    payroll.addEmployee(new Engineer("Carol Davis", "E002", 65000, 15, 600, "Hardware"));
    payroll.addEmployee(new Intern("David Wilson", "I001", 20000, 5000, 6));
    payroll.addEmployee(new Manager("Eve Brown", "M002", 85000, 20000, 8));
    
    // Display all employees using polymorphism
    payroll.displayAllEmployees();
    
    // Calculate payroll using virtual functions
    payroll.calculateTotalPayroll();
    
    // Find highest paid employee
    payroll.findHighestPaid();
    
    cout << "\nFinal Employee Count: " << Employee::getTotalEmployees() << endl;
    
    return 0;
}