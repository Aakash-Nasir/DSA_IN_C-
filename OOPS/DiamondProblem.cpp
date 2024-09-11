#include <iostream>
using namespace std;

class A {
protected:
    int a_ka_protected; // Protected data can be inherited
public:
    int a_ka_public;  // Public data can be accessed and inherited
    
    // Using initializer list for constructors
    A() : a_ka_protected(0), a_ka_public(0) {
        cout << "A ke constructor ko call hua" << endl;
    }
};

class B : virtual public A { // Virtual inheritance to avoid ambiguity
public:
    int b_ka_public;

    B() : b_ka_public(5) {
        cout << "B ke constructor ko call hua" << endl;
    }
};

class C : virtual public A {
public:
    int c_ka_public;

    C() : c_ka_public(0) {
        cout << "C ke constructor ko call hua" << endl;
    }
};

class D : public B, public C {
public:
    int d_ka_public;

    D() : d_ka_public(0) {
        cout << "D ke constructor ko call hua" << endl;
    }

    // Making show() inline to reduce overhead
    void show() {
        cout << "a_ka_public: " << a_ka_public << endl;
    }
};

int main() {
    D d;
    d.a_ka_public = 10; // Accessing inherited public member from A
    d.show();           // Displaying the value of a_ka_public
}
