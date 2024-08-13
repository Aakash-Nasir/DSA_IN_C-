#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n!= 0){
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n/=10;
    }

    cout << "Reversed Number = " << reversedNumber << endl;

    return 0;
}

// Another Way
//  int lastdigit= 0;
//       int reverse = 0;
//       while(n>0)
//      { 
//       reverse = reverse*10;
//       lastdigit = n % 10;
//       reverse = reverse+lastdigit;
//       n=n/10;
      
//  }
//  cout<<reverse;
//  }
