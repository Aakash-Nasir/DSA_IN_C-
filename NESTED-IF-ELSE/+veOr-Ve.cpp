// write a C++ program that determines if the number is positive, negative, or zero. Additionally, if the number is positive, check whether it's even or odd.

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;

        if (number % 2 == 0) {
            cout << "It is an even number." << endl;
        } else {
            cout << "It is an odd number." << endl;
        }

    } else if (number < 0) {
        cout << "The number is negative." << endl;

    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
