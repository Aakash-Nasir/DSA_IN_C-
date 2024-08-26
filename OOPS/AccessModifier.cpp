#include<iostream>
using namespace std;

class Student{
    public:
        int rno;
        string name;
    void display(){
        cout<<name<<" "<<marks<<" "<<rno<<endl;
    }
    private: 
        float marks;
    };

int main() {
    Student s1;
    s1.rno = 58;
    s1.name = "Aakash";

    // s1.marks = 84.1; Can't set Private modifier
    s1.display();

    }