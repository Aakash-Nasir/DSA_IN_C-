#include<iostream>
using namespace std;

class Car { // Car is a user defined data type
public:
// Properties of uddt
string name;
int price;
int seats;
string type;

};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.type<<" "<<c.seats<<endl;
}

void change(Car c){ // Pass by value
    c.name = "Audi AB";
}
void changeName(Car& c){ // Pass by referance
    c.name = "Harrier";
}

int main(){

Car c1; // Object Creation
c1.name = "Honda City";
c1.price = 1500000;
c1.seats = 5;
c1.type = "Sedan";
   
Car c2; // Object Creation
c2.name = "Maruti Swift";
c2.price = 700000;
c2.seats = 5;
c2.type = "Hatchback";
   
Car c3; // Object Creation
c3.name = "Toyota Fortuner";
c3.price = 4500000;
c3.seats = 8;
c3.type = "SUV";

// cout<<c2.name<<" "<<c2.type<<" "<<c2.seats<<" "<<c2.price<<endl;
// cout<<c1.name<<" "<<c1.type<<" "<<c1.seats<<" "<<c1.price<<endl;
// cout<<c3.name<<" "<<c3.type<<" "<<c3.seats<<" "<<c3.price<<endl;

print(c1);
change(c1); // Pass by value
changeName(c1); // Pass by referance
}