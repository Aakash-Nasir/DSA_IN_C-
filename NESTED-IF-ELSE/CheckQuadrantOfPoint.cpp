// Check the Quadrant of a Point
// Problem: Write a program to determine which quadrant a point lies in, based on its x and y coordinates.

#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter the coordinates (x and y): ";
    cin >> x >> y;

    if (x > 0) {
        if (y > 0) {
            cout << "The point is in the first quadrant." << endl;
        } else if (y < 0) {
            cout << "The point is in the fourth quadrant." << endl;
        } else {
            cout << "The point lies on the positive x-axis." << endl;
        }
    } else if (x < 0) {
        if (y > 0) {
            cout << "The point is in the second quadrant." << endl;
        } else if (y < 0) {
            cout << "The point is in the third quadrant." << endl;
        } else {
            cout << "The point lies on the negative x-axis." << endl;
        }
    } else {
        if (y > 0) {
            cout << "The point lies on the positive y-axis." << endl;
        } else if (y < 0) {
            cout << "The point lies on the negative y-axis." << endl;
        } else {
            cout << "The point is at the origin." << endl;
        }
    }

    return 0;
}
