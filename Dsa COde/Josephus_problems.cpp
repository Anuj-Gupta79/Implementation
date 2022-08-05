// Death Game 
#include<bits/stdc++.h>
using namespace std;

int gun_shot(int n, int k){
    if(n==1) return 0;
    return (gun_shot(n-1,k)+k)%n;
}

int main(){
    int n; cin>>n;
    int k; cin>>k;
    cout<<"Last standing man: "<<gun_shot(n,k);
}