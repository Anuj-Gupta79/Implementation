#include<bits/stdc++.h>
using namespace std;

int modulo(string s){
    int r = s[0]-'0';
    for(int i=1;i<s.size();i++){
        int x = s[i] - '0';
        r = ((r*10)%11 + x%11)%11;
    }
    return r;
}

int main(){
    string s; cin>>s;
    cout<<modulo(s)<<'\n';
    return 0;
}