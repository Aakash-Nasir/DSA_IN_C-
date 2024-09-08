#include <iostream>
using namespace std;

// Recursive function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char source, char destination, char helper) {
    // Base case: when there is only one disk to move
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: Move n-1 disks from source to helper using destination as helper
    towerOfHanoi(n - 1, source, helper, destination);

    // Step 2: Move the nth (largest) disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move n-1 disks from helper to destination using source as helper
    towerOfHanoi(n - 1, helper, destination, source);
}

int main() {
    int n = 3; // Number of disks
    // Calling the function to move n disks from 'A' (source) to 'C' (destination) using 'B' (helper)
    towerOfHanoi(n, 'A', 'C', 'B');
    
    return 0;
}
