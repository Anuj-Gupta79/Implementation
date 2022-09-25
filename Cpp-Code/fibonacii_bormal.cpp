#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll fib(ll n){
    if(n<=1) return n;
    else return fib(n-1)+fib(n-2);
}

int main(){
    ll n;
    cin>>n;
    cout<<fib(n);
    return 0;
}