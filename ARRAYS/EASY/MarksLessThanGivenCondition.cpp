#include<iostream>
#include<vector>
using namespace std;

int main() { 
    int n; 
    cout << "Enter the number of students: ";
    cin >> n;

    // Input validation
    if (n <= 0) {
        cout << "Invalid number of students!" << endl;
        return 1;  // Exit the program with an error code
    }

    vector<int> arr(n);  // Use vector instead of VLA
    cout << "Enter the marks of students:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print marks less than 97
    cout << "Marks less than 97:" << endl;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 97) {
            cout<<"Index is"<<" "<<i<<endl; // Print index of less than 97 marks 
            cout<<"Marks is"<<" "<< arr[i] << endl;  // Print marks less than 97
        } 
    }

    return 0;
}
