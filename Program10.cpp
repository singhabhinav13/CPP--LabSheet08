// Write a program to define a class Student with data members name, roll_no, and marks.
// Use member functions to input and display the details of the student.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display student details
    void displayDetails() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;

    student.inputDetails();
    student.displayDetails();

    return 0;
}
