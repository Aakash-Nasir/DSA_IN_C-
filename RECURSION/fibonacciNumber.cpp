// The current recursive implementation of the Fibonacci function 
// has a time complexity of O(2^n) due to repeated calculations of 
// the same subproblems. To optimize this, you can use Memoization or Dynamic Programming 
// to store intermediate results and avoid redundant calculations. This will reduce the time complexity to O(n).

#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n){
    if(n == 1 || n == 2)
    return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    cout<<fibonacci(10);
}

// optimization 
#include<iostream>
#include<vector>
using namespace std;
int fibonacci(int n, vector<int>& arr){
    if(n==1 || n ==2)
    return 1;

    if(arr[0] != -1) // if the result is already computed return it
    return arr[n];
    
    // Store the result of the subproblem
    arr[n] = fibonacci(n-1,arr)+fibonacci(n-2,arr);
    return arr[n];
}
int main(){
    int n =10;
    vector<int> arr(n+1,-1);// Create a arr array initialized to -1
    cout<<fibonacci(n,arr);
}