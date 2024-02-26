#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string rollNo;
    int semesterNo;
    string courseName;
    int marks;

public:
    // Parameterized constructor
    Student(string name, string roll, int semester, string course)
        : studentName(name), rollNo(roll), semesterNo(semester), courseName(course), marks(0) {}

    // Default constructor
    Student() : studentName(""), rollNo(""), semesterNo(0), courseName(""), marks(0) {}

    // Function to get student data from the user
    void getStudentData() {
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter roll no.: ";
        getline(cin, rollNo);

        cout << "Enter semester no.: ";
        cin >> semesterNo;

        cin.ignore();  // Consume the newline character left in the buffer

        cout << "Enter course name: ";
        getline(cin, courseName);

        cout << "Enter your marks: ";
        cin >> marks;
    }

    // Function to display quiz grade based on marks
    void displayQuizGrade() {
       
        // Displaying grade based on marks
        if (marks >= 90) {
            cout << "Your grade is: A" << endl;
        } else if (marks >= 80) {
            cout << "Your grade is: B" << endl;
        } else if (marks >= 70) {
            cout << "Your grade is: C" << endl;
        } else if (marks >= 60) {
            cout << "Your grade is: D" << endl;
        } else {
            cout << "Your grade is: F" << endl;
        }
    }
};

int main() {
    // Creating a Student object using the parameterized constructor
    Student student1("Fayez Afzaal", "FA18-RCS-010-Section (A)", 2, "OOP");
Student student3("zara","sec c",3,"oop");
    // Creating two Student objects using the default constructor
    Student student2;

    // Getting data for student2 from the user
    cout << "Enter student2 data" << endl;
    student2.getStudentData();
    
    student3.displayQuizGrade();
    // Displaying quiz grade for student1
    student1.displayQuizGrade();

    // Displaying quiz grade for student2
    student2.displayQuizGrade();
    
    return 0;
}
