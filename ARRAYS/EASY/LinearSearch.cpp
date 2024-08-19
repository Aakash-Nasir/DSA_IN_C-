#include<iostream>
using namespace std;

int linearSearch(int arr[], int n,int x){
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==x){
            return i;
        }
    }
     
            return -1;
     
    }

    int main(){
        int arr[] = {20,45,27,47,55,67,75,88,90};
        int n = sizeof(arr)/sizeof(arr[0]);
        int x;
        cout<<"Enter target x";
        cin>>x;
        int result = linearSearch(arr,n,x);
        if(result != -1){
           cout<<"Element found at index"<<" "<<result<<endl;
        }
        else{
            cout<<"Element not Found";
        }
    }