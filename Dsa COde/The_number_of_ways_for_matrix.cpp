// find the number of ways from one point to another
#include<bits/stdc++.h>
using namespace std;

long long int ways(int n,int m){
    if(n==0 || m==0) return 1;
    return ways(n-1,m)+ways(n,m-1);
}

int main(){
    int n,m; cin>>n>>m;
    cout<<"ways: "<<ways(n,m);
    return 0;
}