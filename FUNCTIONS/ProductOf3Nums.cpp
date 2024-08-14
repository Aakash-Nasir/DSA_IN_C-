#include <iostream>
using namespace std;

int product(int a, int b,  int c){
    int multiplication = a*b*c;
    return multiplication;
}

int main() {
    int x,y,z;
    cout<<"Enter value of  x y z respectively";
    cin>>x>>y>>z;
    cout<<product(x,y,z);
}