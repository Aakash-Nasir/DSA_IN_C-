#include<iostream>
using namespace std;
int main() {
    int n ,count = 0;
    cout<<"enter number";
    cin>>n;

while (n != 0)
{
  n/= 10;
  ++count;
}
cout<<"Number of digits ="<<count<<endl;
}