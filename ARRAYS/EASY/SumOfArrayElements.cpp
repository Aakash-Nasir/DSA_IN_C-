#include<iostream>
#include<vector>
using namespace std;

int SumOfArrayElements(vector<int> &arr){
    int sum =0;
    int n =arr.size();
    for(int i=0;i<=n;i++){
        sum += arr[i];
    }
return sum;
}
int main() {
  vector<int> arr = {1,2,3,4,5,6,7,8}; // Use vector instead of Arrays
    cout<<"Enter Elements of arrays"<<SumOfArrayElements(arr)<<endl; // Call the function with the vector


}