#include<iostream>
using namespace std;

// Function to calculate GCD using the Euclidean algorithm

int gcd(int a, int b){
    while(b!=0){
    int temp = b;
    b = a%b;
    a = temp;
}
return a;
}
int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Calculate GCD
    int result = gcd(num1, num2);

    // Output the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

// If a = 56 and b = 98, the loop will run 56 times (since min(56, 98) = 56).
// If a = 100000 and b = 1000, the loop will run 1000 times (since min(100000, 1000) = 1000).
// Comparison to the Euclidean Algorithm:
// Euclidean Algorithm: The time complexity is O(log(min(a, b))).
// Brute Force Approach (Your Code): The time complexity is O(min(a, b)).
// The Euclidean algorithm is much more efficient, especially for large values of a and b, because logarithmic complexity grows much slower than linear complexity.

// Conclusion:
// The time complexity of the provided code is O(min(a, b)). This approach is less efficient than the Euclidean algorithm, which has a time complexity of O(log(min(a, b))).