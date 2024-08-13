// Write a program to find the factorial of a given number. The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.

#include <iostream>
using namespace std;
int main()
{ int n;
cout<<"Enter a number :" ;
cin>>n;
int factorial=1;
for(int i=1;i<=n;i++)
{
    factorial=factorial*i;
    
}
cout<<factorial;
}

