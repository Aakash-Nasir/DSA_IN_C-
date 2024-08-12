#include<iostream>
using namespace std;
int main(){
    cout<<"enter cp \n";
   int cp,prof;
    cin>>cp;
    cout<<"enter sp \n";
    int sp;
    cin>>sp;
    if(sp>cp)
    {
        cout<<"profit= "<<sp-cp;
    }
    if(cp>sp)
    {
    
       cout<<"loss ="<<cp-sp;
        
    }
    if(sp==cp)
    {
        cout<<"No profit,No loss";
    }
    
    return 0;
    
}