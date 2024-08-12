#include <iostream>
using namespace std;
int main()
{
    //find a number is divisible by 3 or  or not;
    int n;
    cout<<"enter a number \n";
    cin>>n;
    if(n%3==0 || n%5==0)
    {
        cout<<"number is divible";
    }
    else
    {
        cout<<"number is not divisible";
    }
}