#include<iostream>
#include<cmath>
using namespace std;
int square( int x)
{
    if(x==0 || x==1)
    return x;
    while(x>=0)
    
    return x*x;
}
int main()
{
    int x;
    cout<<"enter num" " ";
    cin>>x;
    cout<<square(x);
}