#include <iostream>
using namespace std;
int main()
{   //wap to find greatest no. among three
int a,b,c;
    cout<<"enter ist no \n";
    cin>>a;
    cout<<"enter 2nd no \n";
    cin>>b;
    cout<<"enter 3rd no \n";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"ist no is greatest among three";
}
if(b>c && c>b)
{
    cout<<"2nd no is greatest";
    
}
if(c>a && c>b)
{
    cout<<"3rd no. is greatest";
}
    return 0;
}