#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>arr, int target,int start) {
    int i=start; int j=arr.size();
    while(i<j){
        if(arr[i]+arr[j]==target){
            return true;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    return false;
}

bool threeSum(vector<int>arr){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(twoSum(arr,-arr[i],i+1)){
            return true;
        }
    }
    return false;
}

int main(){
    int test; cin>>test;
    while(test--){
        int size; cin>>size;
        vector<int> arr;
        for(int i=0;i<size;i++){
            int x; cin>>x;
            arr.push_back(x);
        }
        if(threeSum(arr)){
            cout<<"Find";
        } else {
            cout<<"Not Find";
        }
    }
    return 0;
}