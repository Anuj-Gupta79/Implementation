#include<bits/stdc++.h>
using namespace std;

int Xor_Subarray(int arr[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++) res^=arr[k];
        }
    }
    return res;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<Xor_Subarray(arr,n)<<'\n';
    return 0;
}