// Check Character Type (Vowel/Consonant/Digit/Special Character)
// Problem: Write a program that checks whether a given character is a vowel, consonant, digit, or special character.

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "The character is a vowel." << endl;
        } else {
            cout << "The character is a consonant." << endl;
        }
    } else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special character." << endl;
    }

    return 0;
}
