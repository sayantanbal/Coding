// Library Management System
// Design a system to manage books in a library. Create classes for Book, Member, and Library. Use inheritance to create StudentMember and FacultyMember. Implement file I/O to store issue/return data. Use polymorphism to calculate fine differently for students and faculty.

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

// Book class
class Book {
    string bookID, title, author;
    bool isIssued;

public:
    Book(string id = "", string t = "", string a = "") 
        : bookID(id), title(t), author(a), isIssued(false) {}

    string getBookID() const { return bookID; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    bool getIssuedStatus() const { return isIssued; }
    void setIssuedStatus(bool status) { isIssued = status; }

    void displayBook() const {
        cout << "Book ID: " << bookID << ", Title: " << title 
             << ", Author: " << author << ", Status: " 
             << (isIssued ? "Issued" : "Available") << endl;
    }
};

// Base Member class
class Member {
protected:
    string memberID, name, email;
    vector<string> issuedBooks;

public:
    Member(string id = "", string n = "", string e = "") 
        : memberID(id), name(n), email(e) {}

    virtual ~Member() {}

    string getMemberID() const { return memberID; }
    string getName() const { return name; }
    vector<string> getIssuedBooks() const { return issuedBooks; }

    virtual double calculateFine(int daysOverdue) const = 0;
    virtual string getMemberType() const = 0;

    void addIssuedBook(const string& bookID) { issuedBooks.push_back(bookID); }

    void removeIssuedBook(const string& bookID) {
        for (auto it = issuedBooks.begin(); it != issuedBooks.end(); ++it) {
            if (*it == bookID) {
                issuedBooks.erase(it);
                break;
            }
        }
    }

    virtual void displayMember() const {
        cout << "Member ID: " << memberID << ", Name: " << name 
             << ", Email: " << email << ", Type: " << getMemberType() << endl;
        cout << "Issued Books: ";
        for (const string& book : issuedBooks) cout << book << " ";
        cout << endl;
    }
};

// StudentMember class
class StudentMember : public Member {
    string studentClass;

public:
    StudentMember(string id = "", string n = "", string e = "", string sClass = "") 
        : Member(id, n, e), studentClass(sClass) {}

    double calculateFine(int daysOverdue) const override { return daysOverdue * 2.0; }
    string getMemberType() const override { return "Student"; }

    void displayMember() const override {
        Member::displayMember();
        cout << "Class: " << studentClass << endl;
    }
};

// FacultyMember class
class FacultyMember : public Member {
    string department;

public:
    FacultyMember(string id = "", string n = "", string e = "", string dept = "") 
        : Member(id, n, e), department(dept) {}

    double calculateFine(int daysOverdue) const override { return daysOverdue * 5.0; }
    string getMemberType() const override { return "Faculty"; }

    void displayMember() const override {
        Member::displayMember();
        cout << "Department: " << department << endl;
    }
};

// Transaction record
struct Transaction {
    string memberID, bookID, issueDate, returnDate, transactionType;
    double fine;

    Transaction(string mID = "", string bID = "", string iDate = "", 
                string rDate = "", string type = "", double f = 0.0)
        : memberID(mID), bookID(bID), issueDate(iDate), 
          returnDate(rDate), transactionType(type), fine(f) {}
};

// Library class
class Library {
    vector<Book> books;
    vector<Member*> members;
    vector<Transaction> transactions;
    string transactionFile;

public:
    Library(string filename = "library_transactions.txt") : transactionFile(filename) { loadTransactions(); }

    ~Library() {
        saveTransactions();
        for (Member* member : members) delete member;
    }

    void addBook(const Book& book) { books.push_back(book); cout << "Book added!\n"; }
    void addMember(Member* member) { members.push_back(member); cout << "Member added!\n"; }

    Book* findBook(const string& bookID) {
        for (Book& book : books) {
            if (book.getBookID() == bookID) return &book;
        }
        return nullptr;
    }

    Member* findMember(const string& memberID) {
        for (Member* member : members) {
            if (member->getMemberID() == memberID) return member;
        }
        return nullptr;
    }

    bool issueBook(const string& memberID, const string& bookID) {
        Member* member = findMember(memberID);
        Book* book = findBook(bookID);

        if (!member) { cout << "Member not found!\n"; return false; }
        if (!book) { cout << "Book not found!\n"; return false; }
        if (book->getIssuedStatus()) { cout << "Book already issued!\n"; return false; }

        book->setIssuedStatus(true);
        member->addIssuedBook(bookID);

        time_t now = time(0);
        string currentDate(ctime(&now));
        currentDate.pop_back();

        transactions.push_back(Transaction(memberID, bookID, currentDate, "", "ISSUE", 0.0));
        cout << "Book issued to " << member->getName() << endl;
        return true;
    }

    bool returnBook(const string& memberID, const string& bookID, int daysOverdue = 0) {
        Member* member = findMember(memberID);
        Book* book = findBook(bookID);

        if (!member) { cout << "Member not found!\n"; return false; }
        if (!book) { cout << "Book not found!\n"; return false; }
        if (!book->getIssuedStatus()) { cout << "Book not issued!\n"; return false; }

        double fine = 0.0;
        if (daysOverdue > 0) {
            fine = member->calculateFine(daysOverdue);
            cout << "Fine: Rs. " << fine << " for " << daysOverdue << " days\n";
        }

        book->setIssuedStatus(false);
        member->removeIssuedBook(bookID);

        time_t now = time(0);
        string currentDate(ctime(&now));
        currentDate.pop_back();

        transactions.push_back(Transaction(memberID, bookID, "", currentDate, "RETURN", fine));
        cout << "Book returned by " << member->getName() << endl;
        return true;
    }

    void displayBooks() const {
        cout << "\n=== LIBRARY BOOKS ===\n";
        for (const Book& book : books) book.displayBook();
    }

    void displayMembers() const {
        cout << "\n=== LIBRARY MEMBERS ===\n";
        for (const Member* member : members) {
            member->displayMember();
            cout << "---\n";
        }
    }

    void displayTransactions() const {
        cout << "\n=== TRANSACTION HISTORY ===\n";
        for (const Transaction& trans : transactions) {
            cout << "Member: " << trans.memberID << ", Book: " << trans.bookID
                 << ", Type: " << trans.transactionType;
            if (trans.transactionType == "ISSUE") {
                cout << ", Issue Date: " << trans.issueDate;
            } else {
                cout << ", Return Date: " << trans.returnDate;
                if (trans.fine > 0) cout << ", Fine: Rs. " << trans.fine;
            }
            cout << endl;
        }
    }

    void saveTransactions() const {
        ofstream file(transactionFile);
        if (file.is_open()) {
            for (const Transaction& trans : transactions) {
                file << trans.memberID << "|" << trans.bookID << "|"
                     << trans.issueDate << "|" << trans.returnDate << "|"
                     << trans.transactionType << "|" << trans.fine << endl;
            }
            file.close();
            cout << "Transactions saved.\n";
        }
    }

    void loadTransactions() {
        ifstream file(transactionFile);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                size_t pos = 0;
                vector<string> tokens;
                string delimiter = "|";
                
                while ((pos = line.find(delimiter)) != string::npos) {
                    tokens.push_back(line.substr(0, pos));
                    line.erase(0, pos + delimiter.length());
                }
                tokens.push_back(line);

                if (tokens.size() == 6) {
                    transactions.push_back(Transaction(tokens[0], tokens[1], tokens[2], 
                                                     tokens[3], tokens[4], stod(tokens[5])));
                }
            }
            file.close();
            cout << "Transactions loaded.\n";
        }
    }
};

int main() {
    Library library;

    // Add books and members
    library.addBook(Book("B001", "C++ Programming", "Bjarne Stroustrup"));
    library.addBook(Book("B002", "Data Structures", "Mark Weiss"));
    library.addBook(Book("B003", "Algorithms", "Robert Sedgewick"));

    library.addMember(new StudentMember("S001", "Alice Johnson", "alice@email.com", "CS-3"));
    library.addMember(new FacultyMember("F001", "Dr. Carol Wilson", "carol@email.com", "Computer Science"));

    library.displayBooks();
    library.displayMembers();

    // Issue and return books
    cout << "\n=== ISSUING BOOKS ===\n";
    library.issueBook("S001", "B001");
    library.issueBook("F001", "B002");

    cout << "\n=== RETURNING BOOKS ===\n";
    library.returnBook("S001", "B001", 5); // Student with 5 days overdue
    library.returnBook("F001", "B002", 3); // Faculty with 3 days overdue

    library.displayTransactions();

    return 0;
}