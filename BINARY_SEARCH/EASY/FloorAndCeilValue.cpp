#include <bits/stdc++.h>
using namespace std;

pair<int, int> findFloorAndCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int floor = -1, ceil = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return {x, x}; // If x is found, it's both the floor and ceil
        }

        if (arr[mid] < x) {
            floor = arr[mid];
            low = mid + 1; // Look on the right
        } else {
            ceil = arr[mid];
            high = mid - 1; // Look on the left
        }
    }

    return {floor, ceil};
}

int main() {
    int arr[] = {3, 4, 4, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    pair<int, int> ans = findFloorAndCeil(arr, n, x);
    cout << "The floor and ceil are: " << ans.first << " " << ans.second << endl;

    return 0;
}
