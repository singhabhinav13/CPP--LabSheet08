// Write a C++ function to swap two numbers using call-by-reference properties.

#include <iostream>
using namespace std;

// Function to swap two numbers using reference parameters
void swapNumbers(int &first, int &second) {
    int temp = first;
    first = second;
    second = temp;
}

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    swapNumbers(a, b);

    cout << "After swapping: a = " << a << ", b = " << b;

    return 0;
}
