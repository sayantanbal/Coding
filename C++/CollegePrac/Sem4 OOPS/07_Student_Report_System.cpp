#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string name, rollNo;
    vector<int> marks;
    static int totalStudents;

public:
    // Constructor
    Student(string n = "", string roll = "", vector<int> m = {}) 
        : name(n), rollNo(roll), marks(m) {
        totalStudents++;
        cout << "Student " << name << " created!" << endl;
    }
    
    // Copy constructor
    Student(const Student& other) 
        : name(other.name), rollNo(other.rollNo), marks(other.marks) {
        totalStudents++;
        cout << "Student " << name << " copied!" << endl;
    }
    
    // Destructor
    ~Student() {
        totalStudents--;
        cout << "Student " << name << " destroyed!" << endl;
    }
    
    // Inline functions for grade calculation
    inline double calculatePercentage() const {
        if (marks.empty()) return 0.0;
        int total = 0;
        for (int mark : marks) total += mark;
        return (double)total / marks.size();
    }
    
    inline char calculateGrade() const {
        double percentage = calculatePercentage();
        if (percentage >= 90) return 'A';
        else if (percentage >= 80) return 'B';
        else if (percentage >= 70) return 'C';
        else if (percentage >= 60) return 'D';
        else if (percentage >= 50) return 'E';
        else return 'F';
    }
    
    // Operator overloading for addition (combining marks)
    Student operator+(const Student& other) const {
        if (marks.size() != other.marks.size()) {
            cout << "Error: Cannot add students with different number of subjects!" << endl;
            return Student();
        }
        
        vector<int> combinedMarks;
        for (size_t i = 0; i < marks.size(); i++) {
            combinedMarks.push_back(marks[i] + other.marks[i]);
        }
        
        return Student("Combined_" + name + "_" + other.name, 
                      rollNo + "+" + other.rollNo, combinedMarks);
    }
    
    // Operator overloading for comparison (grade comparison)
    bool operator>(const Student& other) const {
        return calculatePercentage() > other.calculatePercentage();
    }
    
    bool operator<(const Student& other) const {
        return calculatePercentage() < other.calculatePercentage();
    }
    
    bool operator==(const Student& other) const {
        return calculatePercentage() == other.calculatePercentage();
    }
    
    // Operator overloading for assignment
    Student& operator=(const Student& other) {
        if (this != &other) {
            name = other.name;
            rollNo = other.rollNo;
            marks = other.marks;
        }
        return *this;
    }
    
    // Operator overloading for stream output
    friend ostream& operator<<(ostream& os, const Student& student) {
        os << "Student: " << student.name << " (Roll: " << student.rollNo << ")\n";
        os << "Marks: ";
        for (int mark : student.marks) os << mark << " ";
        os << "\nPercentage: " << student.calculatePercentage() << "%\n";
        os << "Grade: " << student.calculateGrade() << endl;
        return os;
    }
    
    // Operator overloading for stream input
    friend istream& operator>>(istream& is, Student& student) {
        cout << "Enter student name: ";
        is >> student.name;
        cout << "Enter roll number: ";
        is >> student.rollNo;
        
        int numSubjects;
        cout << "Enter number of subjects: ";
        is >> numSubjects;
        
        student.marks.clear();
        cout << "Enter marks for " << numSubjects << " subjects: ";
        for (int i = 0; i < numSubjects; i++) {
            int mark;
            is >> mark;
            student.marks.push_back(mark);
        }
        return is;
    }
    
    // Getters
    string getName() const { return name; }
    string getRollNo() const { return rollNo; }
    vector<int> getMarks() const { return marks; }
    static int getTotalStudents() { return totalStudents; }
    
    // Display function
    void displayReport() const {
        cout << "\n=== STUDENT REPORT ===\n";
        cout << *this;
        cout << "======================\n";
    }
};

// Initialize static member
int Student::totalStudents = 0;

int main() {
    cout << "=== STUDENT REPORT SYSTEM ===\n\n";
    
    // Create students using constructor
    Student student1("Alice Johnson", "CS101", {85, 92, 78, 90, 88});
    Student student2("Bob Smith", "CS102", {75, 85, 82, 79, 91});
    Student student3("Carol Davis", "CS103", {95, 88, 92, 85, 94});
    
    cout << "\n=== INDIVIDUAL REPORTS ===\n";
    student1.displayReport();
    student2.displayReport();
    student3.displayReport();
    
    // Demonstrate operator overloading for comparison
    cout << "\n=== GRADE COMPARISON ===\n";
    if (student1 > student2) {
        cout << student1.getName() << " has better grade than " << student2.getName() << endl;
    } else if (student1 < student2) {
        cout << student2.getName() << " has better grade than " << student1.getName() << endl;
    } else {
        cout << student1.getName() << " and " << student2.getName() << " have same grade" << endl;
    }
    
    // Find highest performer
    cout << "\n=== HIGHEST PERFORMER ===\n";
    Student* highest = &student1;
    if (student2 > *highest) highest = &student2;
    if (student3 > *highest) highest = &student3;
    cout << "Highest performer: " << highest->getName() 
         << " with " << highest->calculatePercentage() << "%" << endl;
    
    // Demonstrate operator overloading for addition
    cout << "\n=== COMBINING STUDENT MARKS ===\n";
    Student combined = student1 + student2;
    combined.displayReport();
    
    // Demonstrate copy constructor
    cout << "\n=== COPY CONSTRUCTOR ===\n";
    Student student4 = student1;
    student4.displayReport();
    
    // Demonstrate assignment operator
    cout << "\n=== ASSIGNMENT OPERATOR ===\n";
    Student student5;
    student5 = student3;
    student5.displayReport();
    
    // Create student using input operator
    cout << "\n=== INPUT OPERATOR DEMO ===\n";
    Student student6;
    cout << "Enter details for new student:\n";
    // Uncomment the next line to test input operator
    // cin >> student6;
    // student6.displayReport();
    
    cout << "\n=== FINAL STATISTICS ===\n";
    cout << "Total students created: " << Student::getTotalStudents() << endl;
    
    return 0;
}