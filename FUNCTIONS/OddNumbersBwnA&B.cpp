
#include<iostream>
using namespace std;

void odd(int a,int b){
    if(a>b){
        // odd(b,a); // Swap a and b instead of using recursion
        swap(a,b);
        return;
    }
    for(int i=a;i<=b;i++){
        if(i%2 !=0)
            cout<<i<<endl;
            }
    cout<<endl;
}

int main(){
    int x,y;
    cout<<"Enter Lower Limit"<<endl;
    cin>>x;
    cout<<"Enter Upper Limit"<<endl;
    cin>>y;
    cout<<"odd numbers between"<<" "<<x<<" "<<"and"<<" "<<y<<" "<<"are";
    cout<<endl;
    odd(x,y);

}
