#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &arr,int n,int k){
    int lo =0;
    int hi = arr.size()-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]== k) 
        return mid;

            // if left part is sorted
        if(arr[lo] <= arr[mid]){
         if(arr[lo]<=k && k <= arr[mid]){
            // element exists
            hi = mid-1;
         }
         else{
            lo = mid-1;
         }
        }
        else{
            // if the right part is sorted or not
            if(arr[mid]<=k && k<=arr[hi]){
                // element exists
                lo = mid +1;
            }
            else{
                // element does not exists
                hi = mid - 1;
            }
        }
    }
    return -1;
}
int main() {
vector<int> arr = {7,8,9,1,2,3,4,5,6};
int n =9;
int k = 1;
int ans = search(arr,n,k);
if(ans == -1){
    cout<<"Target is not present";
}
 else{
    cout<<"The index is "<<ans;
 }
 return 0;
}