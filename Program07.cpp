// Write a C++ function to find the sum of two matrix.

#include <iostream>
using namespace std;

// Function to add two matrices and store result in a third matrix
void addMatrices(int a[10][10], int b[10][10], int sum[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int rows, cols;
    int a[10][10], b[10][10], sum[10][10];

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> b[i][j];
        }
    }

    addMatrices(a, b, sum, rows, cols);

    cout << "Sum of the matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
