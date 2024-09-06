#include<iostream>
#include<vector>
using namespace std;

void print1toNusingExtraParameter(int i,int n){
    if(i>n) return; //base case
    cout<<i<<endl; // work before call
    print1toNusingExtraParameter(i+1,n); // Recursive Call
}
int main() {
print1toNusingExtraParameter(1,9); // function call
}