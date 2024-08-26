#include<iostream>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;
    float avg;

    // this keyword
    Cricketer(string name,int runs , float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

};
void change(Cricketer* c){
   c->avg = 77.2;
   // (*c).avg = 77.2;

}

int main() {
  
  Cricketer c1("MS Dhoni",20000,55.4);
  cout<<c1.avg<<endl;
 change(&c1);
 cout<<c1.avg<<endl;


//   cout<<c1.avg<<endl;
//  change(&c1);
//  cout<<c1.avg<<endl;
 
 


 Cricketer* p1 = &c1;
 cout<<p1->runs<<endl; 
 cout<<c1.avg<<endl;
 p1->avg = 75.5;
 cout<<c1.avg<<endl; 

} 