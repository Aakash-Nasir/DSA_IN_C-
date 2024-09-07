#include<iostream>
using namespace std;

long long loGPowerFunction(long long a, long long n){  // Use long long for large numbers
    if(n == 0) 
        return 1;  // Base case: a^0 = 1

    long long halfPower = loGPowerFunction(a, n / 2);  // Calculate a^(n/2) once

    if(n % 2 == 0) {
        return halfPower * halfPower;  // If n is even, return (a^(n/2))^2
    } else {
        return halfPower * halfPower * a;  // If n is odd, return (a^(n/2))^2 * a
    }
}

int main() {
    cout << loGPowerFunction(2, 64);  // Output 2^64
}

// This is 2^64, which equals 18446744073709551616.

// The time complexity is now O(log n) due to the reduction of the problem size by half at each step.
