#include<bits/stdc++.h>
using namespace std;

bool perfect_square(int n){
    if(n<0) return false;
    long long s = floor(sqrt(n));
    if(s*s == n) return true;
    return false;
}

int main(){
    int n; cin>>n;
    if(perfect_square(n)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}