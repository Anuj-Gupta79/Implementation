#include<bits/stdc++.h>
using namespace std;

int can_see(vector<int> arr,int q){
    int i=q-1; int j=i+1;
    int count = 1;
    if(i==arr.size()-1) return 0;
    if(i==arr.size()-2) return 1; 
    while(j<arr.size()){
        if(j>i+1 && arr[j]>arr[j-1]){
            if(arr[i]>=arr[j]){
                count++;
            }
        } else if(j==i+1){
            if(arr[j]<=arr[i]) count++;
        }
        j++;
    }
    return count;
}

int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        arr.push_back(x);
    }

    int q; cin>>q;
    vector<int>queries;
    for(int i=0;i<q;i++){
        int query; cin>>query;
        queries.push_back(query);
    }

    for(auto it : queries){
        cout<<can_see(arr,it)<<endl;
    }

    return 0;
}