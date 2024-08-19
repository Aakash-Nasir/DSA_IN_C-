// Brute Force Approach Two Loops = O(n^2)
// Optimized Approach Binary Search = O(nlogn)
// Most Optimized Two Pointer Search = O(n)

#include<iostream>
#include<vector>
using namespace std;

pair<int, int> sumOfTwoElementsIsTarget(const vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int current_Sum = arr[left] + arr[right];
        if (current_Sum == target) {
            return {left, right};  // Return the indices of the two elements
        }
        else if (current_Sum < target) {
            left += 1;  // Move the left pointer right to increase the sum
        }
        else {
            right -= 1;  // Move the right pointer left to decrease the sum
        }
    }
    return {-1, -1};  // Return a pair of -1 if no such elements are found
}

int main() {
    vector<int> arr = {20, 40, 60, 80, 90, 120, 240};
    int target = 210;
    pair<int, int> result = sumOfTwoElementsIsTarget(arr, target);

    if (result.first != -1) {
        cout << "Elements at indices " << result.first << " and " << result.second
             << " sum to " << target << "." << endl;
    } 
    else {
        cout << "No two elements sum to " << target << "." << endl;
    }

    return 0;
}
