#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll max_product(ll arr[],ll n){
    int Index1=-1,Index2=-1;
    for(int i=0;i<n;i++){
        if((Index1==-1)||(arr[Index1]<arr[i])){
            Index1=i;
        }
    }
    for(int j=0;j<n;j++){
        if((Index1!=j)&&((Index2==-1)||(arr[Index2]<arr[j]))){
            Index2=j;
        }
    }
    return  ((ll)(arr[Index1]))*arr[Index2];
}

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    ll result=max_product(arr,n);
    cout<<result<<endl;
    return 0;
}