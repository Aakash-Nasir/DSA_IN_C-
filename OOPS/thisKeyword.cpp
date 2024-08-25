#include<iostream>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;
    float avg;

    // constructor
    // Cricketer(string n, int r,float f){
    //     name = n;
    //     runs = r;
    //     float = f;
    // }

    // this keyword
    Cricketer(string name,int runs , float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    void print(int runs){
        cout<<name<<" "<<this->runs<<" "<<avg<<endl;
        cout<<runs;
    }
    int matches(){
        return runs/avg;
    }
};

int main() {
    Cricketer c1("MS Dhoni",20000,55.4);
    Cricketer c2("Sachin Tendulkar",50000,67.7);

// Cricketer c1;
// c1.name = "MS Dhoni";
// c1.runs = 20000;

 cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
 cout<<c2.name<<" "<<c2.runs<<" "<<c1.avg<<endl;
 
//  c1.print(1);
//  c2.print(2);
 cout<<"Total Matches"<<c1.matches()<<endl;
 cout<<"Total Matches"<<c2.matches()<<endl;
}