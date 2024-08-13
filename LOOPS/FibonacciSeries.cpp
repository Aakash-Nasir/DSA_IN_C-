// Write a program to print the Fibonacci series up to n terms. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the previous two.

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n";
    cin>>n;

    int t1 =0 , t2 = 1 , nextTerm=0;
    cout<<"Fibonacci Series";

    for(int i=1;i<=n;++i){
        if(i==1){
            cout<<t1<<" ";
            continue;
        }
        if(i==2){
            cout<<t2<<" ";
            continue;
        }
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;

        cout<<nextTerm<<" ";
    }
    return 0;
}