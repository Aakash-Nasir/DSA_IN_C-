#include<iostream>
#include<vector>
using namespace std;

int stairPath(int n){
    if(n==0){
        return 1; // one way to stay at step 0 [do nothing]

    }
    if(n<0){
        return 0;
        // No way to reach a negative step
    }
    // Recursive call for taking 1,2,3 steps
    return stairPath(n-1)+stairPath(n-2)+stairPath(n-3);
}
int main() {
int n = 20;
cout<<"Number of ways to reach stairs"<<n<<"is"<<stairPath(n)<<endl;
}