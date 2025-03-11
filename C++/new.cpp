#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float marks;
    
public:
    // Constructor to initialize name and marks
    Student(string n, float m) {
        name = n;
        marks = m;
    }
    
    // Default constructor
    Student() {
        name = "";
        marks = 0.0;
    }
    
    // Function to input student details
    void readData() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore(); // Move the ignore after marks input
    }
    
    // Display function to show student details
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Create two student objects
    Student student1, student2;
    
    cout << "Enter details for first student:" << endl;
    student1.readData();
    
    cout << "\nEnter details for second student:" << endl;
    student2.readData();
    
    // Display their information using the class method
    cout << "\nFirst Student Details:" << endl;
    student1.display();
    
    cout << "\nSecond Student Details:" << endl;
    student2.display();
    
    return 0;
}