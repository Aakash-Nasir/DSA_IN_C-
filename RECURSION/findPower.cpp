#include<iostream>
#include<vector>
using namespace std;

int A_raisedToPowerB(int base,int exp){
    if(exp==0) // base case
    return 1;
    //recursive call
    return base*A_raisedToPowerB(base,exp-1);
}
int main() {
    cout<<A_raisedToPowerB(2,5); // fncn call
}