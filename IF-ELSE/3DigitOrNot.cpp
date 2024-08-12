#include <iostream>
using namespace std;
int main()
{
    //find a number is 3 digit or not;
    int n;
    cout<<"enter a number \n";
    cin>>n;
    if(n>=100 && n<=999)
    {
        cout<<"three digit number";
    }
    else
    {
        cout<<"not a three digit number";
    }
}