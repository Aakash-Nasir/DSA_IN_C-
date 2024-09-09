#include <iostream>
using namespace std;

// Recursive function to print array elements
void printArray(int arr[], int size, int index = 0) {
    // Base case: if index reaches the size of the array, stop recursion
    if (index == size) {
        return;
    }

    // Print the current element
    cout << arr[index] << " ";

    // Recursive call to print the next element
    printArray(arr, size, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the recursive function to print the array
    cout << "Array elements: ";
    printArray(arr, size);
    cout << endl;

    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& arr, int idx) {
    // Base Case 
    if (idx == arr.size()) return;

    // Print the current element followed by a space
    cout << arr[idx] << " ";

    // Recursive call
    printVector(arr, idx + 1);
}

int main() {
    vector<int> arr = {6, 7, 8, 9, 10};

    cout << "Vector Elements: ";
    printVector(arr, 0);
    cout << endl;

    return 0;
}
