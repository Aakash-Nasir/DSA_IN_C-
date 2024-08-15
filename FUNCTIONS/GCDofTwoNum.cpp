#include <iostream>
using namespace std;
int gcd( int a, int b){
    int hcf = 1;

    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i ==0){
            hcf = i;
        }
    }
return hcf;
}
int main(){
    int x,y;
    cout<<"Enter value of x and y Respectively";
    cin>>x>>y;
    cout<<gcd(x,y);
}

// If a = 56 and b = 98, the loop will run 56 times (since min(56, 98) = 56).
// If a = 100000 and b = 1000, the loop will run 1000 times (since min(100000, 1000) = 1000).
// Comparison to the Euclidean Algorithm:
// Euclidean Algorithm: The time complexity is O(log(min(a, b))).
// Brute Force Approach (Your Code): The time complexity is O(min(a, b)).
// The Euclidean algorithm is much more efficient, especially for large values of a and b, because logarithmic complexity grows much slower than linear complexity.

// Conclusion:
// The time complexity of the provided code is O(min(a, b)). This approach is less efficient than the Euclidean algorithm, which has a time complexity of O(log(min(a, b))).