#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    // Create an object of the derived class
    Dog myDog;

    // Call a function from the base class
    myDog.eat();

    // Call a function from the derived class
    myDog.bark();

    return 0;
}
