// Check if a Year is a Leap Year

// Problem: Write a program to check if a given year is a leap year. A year is a leap year if:
// It is divisible by 4.
// However, if it is divisible by 100, it is not a leap year, unless it is also divisible by 400;

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year:"<<endl;
    cin>>year;

    if(year%400 == 0){
        cout<<"Leap Year";
    }
       else if(year % 100 == 0){
            cout<<" Not a Leap Year";
        }
        else if(year%4 == 0) {
            cout<<"Leap Year";
        }
        else{
            cout<<"Not a Leap Year";
        }
    
}