#include<iostream>
using namespace std;
int main() {
    int base,exponent;
    long long result = 1;

    cout<<"Enter base and exponenet";
    cin>>base>>exponent;

    for(int i=1;i<=exponent;++i)
{
    result *=base;

}
cout<<base<<"^"<<exponent<<"="<<result<<endl;
}