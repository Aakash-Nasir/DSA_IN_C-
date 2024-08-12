// Grading System Based on Marks
// Problem: Write a program to assign grades based on marks:

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter your marks";
    cin>>marks;

if(marks >= 90){
    cout<<"A+ Grade";

}
else{
    if(marks>=80) {
        cout<<"A Grade";
    }
    else{
        if(marks>=70){
            cout<<"B Grade";
        }
        else{
            if(marks>60){
                cout<<"C Grade";
            }
            else{
                if(marks>50){
                    cout<<"D Grade";
                }
                else{
                    cout<<"You are Fail";
                }
            }
            
        }
    }
}

}