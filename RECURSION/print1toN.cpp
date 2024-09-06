#include<iostream>
#include<vector>
using namespace std;

void print1toN(int n){
    if(n==0) // base case
    return;
    // Recursive Call
    print1toN(n-1);
    cout<<n<<endl;
}

int main() {
print1toN(9);
}