#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s,ans; cin>>s;
    if(isupper(s[0])){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
    }
    else{
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }
    cout<<s<<'\n';
    return 0;
}