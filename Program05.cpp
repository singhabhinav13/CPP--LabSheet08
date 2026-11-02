// Write a C++ function to find out the number of words in a string.

#include <iostream>
using namespace std;

// Function to count words in a string
int countWords(char str[]) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    return count;
}

int main() {
    char str[200];

    cout << "Enter a string: ";
    cin.getline(str, 200);

    cout << "Number of words: " << countWords(str);

    return 0;
}
