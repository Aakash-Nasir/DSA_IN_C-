#include<iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int square(int digit) {
    return digit * digit;
}

int main() {
    int n;
    cout << "Enter any digit number: ";
    cin >> n;

    int digitCount = countDigits(n);  // Store the result of countDigits
    cout << digitCount << " digit number" << endl;  // Output the number of digits

    int squared = square(digitCount);  // Store the square of the digit count
    cout << "Square of the digit count: " << squared << endl;  // Output the square value

    return 0;
}
