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
    char grade;

public:
    // Parameterized constructor
    Student(string name, string roll, int semester, string course,int mark,char g)
        : studentName(name), rollNo(roll), semesterNo(semester), courseName(course), marks(mark), grade(g) {}

    // Default constructor
    Student()  {}

    // Function to get student data from the user
    void getStudentData() {
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter roll no.: ";
        getline(cin, rollNo);

        cout << "Enter semester number.: ";
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
        cout << "Enter student name: \n"<< studentName;

        cout << "Enter roll no.: \n"<< rollNo;

        cout << "Enter semester number.: \n"<< semesterNo;

        cin.ignore();  // Consume the newline character left in the buffer

        cout << "Enter course name: \n"<< courseName;

        cout << "Enter your marks: \n"<< marks;
        cout << "Enter your grade: \n"<< grade;
    }
};

int main() {
    // Creating a Student object using the parameterized constructor
    Student student2("Fayez Afzaal", "FA18-RCS-010-Section (A)", 2, "OOP",90);
Student student3("zara","sec c",3,"oop",60);
    // Creating two Student objects using the default constructor
    Student student1;

    // Getting data for student2 from the user
    cout << "Enter student1 data\n" << endl;
    student1.getStudentData();
    
    cout << "\nEnter student2 data\n" << endl;
    student2.displayQuizGrade();
    // Displaying quiz grade for student1
    student1.displayQuizGrade();

    cout << "\nEnter student3 data\n" << endl;
    // Displaying quiz grade for student2
    student3.displayQuizGrade();
    
    return 0;
}
