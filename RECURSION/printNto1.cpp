#include<iostream>
#include<vector>
using namespace std;

void printNto1(int n){
    if(n==0) // Base Case 
     return;
    
    cout<<n<<endl; // Work Before call means 7 will be print
    printNto1(n-1); // Recursive Call
}
int main() {
    printNto1(7); // Function call

}