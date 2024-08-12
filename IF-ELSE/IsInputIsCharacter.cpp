#include<iostream>
using namespace std;
 int main() {
    // given input is character
    char ch;
    cout<<"Enter any Character Or Number";
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=65 && ascii <=90) 
    {   cout<<"the character is uppercase alphabet";
    
}
if(ascii>=97 && ascii<=122) 
{   cout<<"the character is lowercase alphabet";
    
}
else{
    cout<<"not a character";
}
 }