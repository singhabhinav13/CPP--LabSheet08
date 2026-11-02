// Write a C++ function to print the Fibonacci series.

#include <iostream>
using namespace std;

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 1; i <= n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    printFibonacci(terms);

    return 0;
}
