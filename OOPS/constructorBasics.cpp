#include <iostream>
#include <string> // Include the necessary header for string
using namespace std;

class Car {
public:
    string type;
    int price;
    string name;
    int seats;

    // Constructor using initializer list
    Car(string t, int p, string n, int s) {
     type = t;
     price = p;
     name = n;
     seats = s;
    }
    
};

int main() {
    Car c1("SUV", 4500000, "Fortuner", 8);

    // Optionally, you can print the values to verify
    cout << "Car Type: " << c1.type << endl;
    cout << "Price: " << c1.price << endl;
    cout << "Name: " << c1.name << endl;
    cout << "Seats: " << c1.seats << endl;

    return 0;
}
