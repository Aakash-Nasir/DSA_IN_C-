#include<iostream>
using namespace std;

int main() {
    int n,original,reversedNumber =0, remainder;

      cout << "Enter an integer: ";
    cin >> n;

   original = n;
   while ( n!= 0)
   {
    remainder = n%10;
    reversedNumber = reversedNumber*10+remainder;
    n/=10;
    
   }
   if(original == reversedNumber){
    cout<<original<<"is a palindrome"<<endl;
   }
   else{
    cout<<"Not a Palindrome Number"<<endl;
   }
     
}