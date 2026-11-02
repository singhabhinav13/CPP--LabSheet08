// Write a program to demonstrate function overloading (compile-time polymorphism).
// Create a class Calculator with overloaded functions add (int, int) and add (double, double)
// to perform addition.

#include <iostream>
using namespace std;

class Calculator {
public:
    // Adds two integers
    int add(int a, int b) {
        return a + b;
    }

    // Adds two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Addition of integers (5 + 3): " << calc.add(5, 3) << endl;
    cout << "Addition of doubles (2.5 + 3.7): " << calc.add(2.5, 3.7) << endl;

    return 0;
}
