#include<bits/stdc++.h>
using namespace std;

string mini(string s){
    string s1;
    int i=0;
    while(i<s.size()){
        if(s[i]!=s[i+1] || i==s.size()-1){
            s1+=s[i]; i++;
        }
        else i+=2;
    }
    return s1;
}

int main(){
    string s; cin>>s;
    cout<<mini(s);
    return 0;
}