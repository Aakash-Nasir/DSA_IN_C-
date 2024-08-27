#include<iostream>
#include<vector>
using namespace std;

int TransposeOfMatrix(vector<vector<int>> &arr){
    int rows = arr.size();
    int cols= arr[0].size();
    vector<vector<int>> TransposeOfMatrix(const vector<vector<int>> &arr){
    for(int i=0;i<rows;i++){
        for(int j =0;j<cols;j++){
          transpose[rows][cols] = arr[cols][rows];
        }
    }
    return arr;
}
int main() {
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int result = TransposeOfMatrix(arr);
    cout<<"Transpose of matrix"<<result;
}