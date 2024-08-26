#include<iostream>  // Include the input-output stream library
using namespace std; // Use the standard namespace to avoid writing "std::" before standard functions like cout

int main() {
    int x = 7;       // Declare an integer variable 'x' and initialize it with the value 7
    cout << &x << endl;  // Output the memory address of the variable 'x'
    
    // Declare a pointer variable 'p' of type integer, and assign it the address of 'x'
    int* p = &x;
    
    // Output the value of the pointer 'p', which is the address of 'x'
    cout << p << endl;
    
    // Output the value stored at the address pointed to by 'p' (dereferencing the pointer)
    cout << *p << endl;

    // Change the value at the memory location pointed to by 'p' (which is 'x') to 9
    *p = 9;
    
    // Output the value of 'x' to show that it has been changed to 9
    cout << x << endl;

    return 0;  // Return 0 to indicate that the program executed successfully
}
