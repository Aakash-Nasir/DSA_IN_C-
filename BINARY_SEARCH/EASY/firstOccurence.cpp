#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> &arr, int target){
    int lo = 0;
    int hi = arr.size() -1;
    // bool flag = false;

    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid] == target){
            if( mid == 0 || arr[mid-1] != target){
            return mid;
            
            }
            else{
                hi = mid -1;
            }
        
        }
        else if(arr[mid]<target){
            lo = mid + 1;
        }
        else{
            hi = mid -1;
        }
       
    }
    return -1;
}

int main() {
    vector <int> arr = {1,2,2,3,3,3,4,5,6,7,7,7,8};
    int target = 7;
    int result = firstOccurence(arr,target);
    cout<<"Target first occurence is"<<result;

}