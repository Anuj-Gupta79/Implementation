#include<bits/stdc++.h>
using namespace std;

bool nine(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=9) return false;
    }
    return true;
}

bool polindrome(int arr[], int n){
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]) return false;
    }
    return true;
}
int main(){
    int t; cin>>t; 
    while(t--){
        int n; cin>>n;
        int num[n+1]={0};
        for(int i=0;i<n;i++) cin>>num[i];
        int mid = n/2;
        if(nine(num,n)){
            num[0]=1;
            for(int i=1;i<n;i++) num[i]=0;
            num[n]=1;
            for(int i=0;i<=n;i++) cout<<num[i];
            cout<<'\n';
        }
        else if(polindrome(num,n)){
             if(n%2==0){
                num[mid]+=1;
                num[mid-1]+=1;
            }
            else{
                num[mid+1]+=1;
                num[mid-1]+=1;
            }
        }
        else{
            if(n%2==0){
                for(int i=0;i<mid;i++){
                    if(i==mid-1){
                        num[mid]=max(num[mid],num[i]);
                        num[i]=num[mid];
                    }
                    num[n-i-1] = num[i];
                }
            }
            else{
                for(int i=0;i<mid;i++){
                    if(i==mid-1){
                        num[mid+1]=max(num[mid+1],num[i]);
                        num[i]=num[mid+1];
                    }
                    num[n-i-1] = num[i];
                }
            }
        }
        for(int i=0;i<n;i++) cout<<num[i];
        cout<<'\n';
    }
    return 0;
}