#include<bits/stdc++.h>
using namespace std;

stack<int> sum(vector<int>arr1, vector<int>arr2){
    stack<int>res;
    int i=arr1.size()-1; int j=arr2.size()-1;
    int carry = 0;
    while(i>=0 && j>=0){
        res.push((arr1[i]+arr2[j])%10 + carry);
        carry = (arr1[i] + arr2[j])/10;
        i--; j--;
    }
    while(i>=0){
        if(carry != 0){
              res.push(arr1[i] + carry);
              carry = 0; 
        }
        res.push(arr1[i]); 
        i--;
    }
    while(j>=0){
        if(carry != 0){
              res.push(arr2[i] + carry);
              carry = 0; 
        }
        res.push(arr1[j]); 
        j--;
    }
    if(carry!=0) res.push(carry);
    return res;
}

int main(){
    int n,m;
    cin>>n;
    vector<int> arr1,arr2;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        arr1.push_back(x);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int x; cin>>x;
        arr2.push_back(x);
    }
    stack<int> ans = sum(arr1,arr2);
    while(!ans.empty()){
        cout<<ans.top();
        ans.pop();
    }
    return 0;
}