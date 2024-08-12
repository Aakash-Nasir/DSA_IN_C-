// Find the Largest of Three Numbers
// Problem: Write a program to find the largest of three numbers.

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>b){
        if(a>c){
            cout<<"A";
        }
        else{
            cout<<"C";
        }
    }
        else {
            if(b>c){
            cout<<"B";
        }
        
        else {
            cout<<"C";
        }
    }
}
