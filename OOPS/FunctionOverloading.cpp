#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to add an integer and a double
double add(int a, double b) {
    return a + b;
}

int main() {
    int intResult1 = add(5, 10);             // Calls add(int, int)
    int intResult2 = add(2, 3, 7);           // Calls add(int, int, int)
    double doubleResult1 = add(2.5, 3.7);    // Calls add(double, double)
    double doubleResult2 = add(10, 5.5);     // Calls add(int, double)

    std::cout << "Sum of 5 and 10 is: " << intResult1 << std::endl;
    std::cout << "Sum of 2, 3, and 7 is: " << intResult2 << std::endl;
    std::cout << "Sum of 2.5 and 3.7 is: " << doubleResult1 << std::endl;
    std::cout << "Sum of 10 and 5.5 is: " << doubleResult2 << std::endl;

    return 0;
}
