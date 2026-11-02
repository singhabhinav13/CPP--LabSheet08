// Write a program to demonstrate single inheritance.
// Create a base class Person with name and age, and a derived class Student with marks.
// Display all details using functions.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Function to input person details
    void inputPersonDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display person details
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    float marks;

public:
    // Function to input marks
    void inputMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display all details
    void displayAllDetails() {
        displayPersonDetails();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;

    student.inputPersonDetails();
    student.inputMarks();

    cout << "\nStudent Details\n";
    student.displayAllDetails();

    return 0;
}
