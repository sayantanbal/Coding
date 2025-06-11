#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Course {
public:
    string id, name;
    int credits;
    
    Course(string cid, string cname, int cr) : id(cid), name(cname), credits(cr) {}
};

class Student {
protected:
    string name, id;
    vector<Course> courses;
    
public:
    Student(string n, string sid) : name(n), id(sid) {}
    virtual ~Student() {}
    
    // Function overloading
    void registerCourse(const Course& c) { courses.push_back(c); }
    void registerCourse(string cid, string cname, int credits) {
        courses.push_back(Course(cid, cname, credits));
    }
    
    virtual void displayLoad() const = 0;
    virtual int getMaxCredits() const = 0;
    
    void saveToFile() const {
        ofstream file("students.txt", ios::app);
        file << id << " " << name << " " << courses.size() << "\n";
        for (const auto& c : courses)
            file << c.id << " " << c.name << " " << c.credits << "\n";
        file.close();
    }
    
    string getName() const { return name; }
    string getId() const { return id; }
};

class UndergraduateStudent : public Student {
public:
    UndergraduateStudent(string n, string sid) : Student(n, sid) {}
    
    void displayLoad() const override {
        int total = 0;
        for (const auto& c : courses) total += c.credits;
        cout << "UG Student: " << name << " (ID: " << id << ")\n";
        cout << "Courses: " << courses.size() << ", Total Credits: " << total << "/" << getMaxCredits() << "\n";
    }
    
    int getMaxCredits() const override { return 20; }
};

class PostgraduateStudent : public Student {
public:
    PostgraduateStudent(string n, string sid) : Student(n, sid) {}
    
    void displayLoad() const override {
        int total = 0;
        for (const auto& c : courses) total += c.credits;
        cout << "PG Student: " << name << " (ID: " << id << ")\n";
        cout << "Courses: " << courses.size() << ", Total Credits: " << total << "/" << getMaxCredits() << "\n";
    }
    
    int getMaxCredits() const override { return 24; }
};

int main() {
    vector<Student*> students = {
        new UndergraduateStudent("Alice", "UG001"),
        new PostgraduateStudent("Bob", "PG001")
    };
    
    Course math("CS101", "Mathematics", 4);
    Course physics("PH101", "Physics", 3);
    
    // Function overloading demonstration
    students[0]->registerCourse(math);
    students[0]->registerCourse("CS102", "Programming", 4);
    
    students[1]->registerCourse(physics);
    students[1]->registerCourse("PH201", "Advanced_Physics", 5);
    
    cout << "=== Course Load Display ===\n";
    for (auto* s : students) {
        s->displayLoad();
        s->saveToFile();
        cout << endl;
    }
    
    for (auto* s : students) delete s;
    
    cout << "Student data saved to students.txt\n";
    return 0;
}