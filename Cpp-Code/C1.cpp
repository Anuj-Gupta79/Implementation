#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    int sum=0;
    while(n>0){
        int rem = n%10;
        sum+=rem;
        n/=10;
    }
}

vector<int> Id(vector<int>O){
    vector<int> ans;
    for(int i=0;i<O.size();i++){
        ans[i]=fun(O[i]);
    }
    return ans;
}

int main(){
    int n; cin>>n;
    vector<int> O;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        O.push_back(t);
    }
    vector<int> N = Id(O);
    for(int i=0;i<n;i++) cout<<N[i]<<" ";
    cout<<N[n-1];
    return 0;
}