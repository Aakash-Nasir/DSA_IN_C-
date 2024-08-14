#include<iostream>
using namespace std;

double AreaOfCircle(int r){

double area = 3.14*r*r;
return area;

}

int main() {
    int r;
    cout<<"Enter Radius of circle:";
    cin>>r;
    cout<<"Area OF Circle is"<<AreaOfCircle(r);
     
}
