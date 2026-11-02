// Write a C++ function to find out the sum of diagonal numbers in matrix.

#include <iostream>
using namespace std;

// Function to find sum of main diagonal elements of a square matrix
int diagonalSum(int matrix[10][10], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    return sum;
}

int main() {
    int size;
    int matrix[10][10];

    cout << "Enter size of square matrix: ";
    cin >> size;

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Sum of diagonal elements: " << diagonalSum(matrix, size);

    return 0;
}
