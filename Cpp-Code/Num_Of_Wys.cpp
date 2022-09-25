#include<bits/stdc++.h>
using namespace std;

int func(int m, int n, int count){
    if(m==1 || n==1) return 1;
    count++;
    cout<<count<<"---->"<<func(m-1,n,count)<<" "<<func(m,n-1,count)<<endl;
    return func(m-1,n,count)+func(m,n-1,count);
}

int main(){
    int m,n; cin>>m>>n;
    cout<<func(m,n,0)<<endl;
    return 0;
}