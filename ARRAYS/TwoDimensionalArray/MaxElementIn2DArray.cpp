#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int MaxElementInMatrix(vector<vector<int>> &arr){
    int max = INT_MIN;
    int rows = arr.size(); // Get the num of rows
    for(int i =0;i<rows;i++){
        int cols = arr[i].size(); // Get the num of cols in each row
        for(int j=0;j<cols;j++){
            if(arr[i][j]>max)
            max = arr[i][j];
        }
    }

return max; // Return the maximum  element found

}
int main(){
    // correctly initializing a 2D vector
    vector<vector<int>> arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };
    int result = MaxElementInMatrix(arr);
    cout<<"The maximum element in the matrix is: "<<result;

}