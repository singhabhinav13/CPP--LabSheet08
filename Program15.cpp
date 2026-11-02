// Write a program to demonstrate abstraction using an abstract class Shape.
// Define a pure virtual function area(), and create derived classes Circle and Rectangle
// to calculate and display their areas.

#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual double area() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);

    cout << "Area of Circle (radius 5): " << circle.area() << endl;
    cout << "Area of Rectangle (4 x 6): " << rectangle.area() << endl;

    return 0;
}
