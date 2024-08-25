 #include<iostream>
 using namespace std;
class Student{ // Student is a new data type

public:
string name;
int rno;
float gpa;
// int marks[5];

};

 int main(){
  
  Student s1;
  s1.name = "Aakash";
  s1.rno = 58;
  s1.gpa = 8.4;

  
  Student s2;
  s2.name = "Arpit";
  s2.rno = 40;
  s2.gpa = 8.1;

  cout<<s1.name<<" "<<s1.gpa<<endl;
  cout<<s2.name<<" "<<s2.gpa<<endl;

  
 }