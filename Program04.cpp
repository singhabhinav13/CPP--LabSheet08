// Write a C++ function to copy a string from another string.

#include <iostream>
using namespace std;

// Function to copy source string into destination string
void copyString(char destination[], char source[]) {
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];

    cout << "Enter a string: ";
    cin.getline(source, 100);

    copyString(destination, source);

    cout << "Copied string: " << destination;

    return 0;
}
