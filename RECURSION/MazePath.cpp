#include <iostream>
using namespace std;

// Recursive function to find the number of paths in a maze
int countPaths(int i, int j, int n, int m) {
    // Base case: if we've reached the destination (bottom-right corner)
    if (i == n - 1 && j == m - 1) {
        return 1; // Found one valid path
    }
    
    // If we are out of bounds, return 0
    if (i >= n || j >= m) {
        return 0;
    }
    
    // Recursive call to move right (i, j+1) and down (i+1, j)
    int rightPaths = countPaths(i, j + 1, n, m); // Move right
    int downPaths = countPaths(i + 1, j, n, m);  // Move down

    // Total paths from the current cell is the sum of right and down paths
    return rightPaths + downPaths;
}

int main() {
    int n = 3; // Number of rows
    int m = 3; // Number of columns
    
    // Starting from (0, 0) to (n-1, m-1)
    cout << "Total number of paths in a " << n << "x" << m << " maze: " 
         << countPaths(0, 0, n, m) << endl;
    
    return 0;
}
