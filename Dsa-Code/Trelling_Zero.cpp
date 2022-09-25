#include<bits/stdc++.h>
using namespace std;

int trailing(int n){
    int count = 0;
    for(int i=5; i<n;i*=5) count+=floor(n/i);
    return count;
}

int main(){
    int n; cin>>n;
    cout<<"Trailing Zeros : "<<trailing(n)<<'\n';
    return 0;
}