#include<bits/stdc++.h>
using namespace std;

int count_Sub(string s,int k){
    int subString_count = 0;
    int  n = s.size();
    for(int i=0;i<n;i++){
        int alpha[26] = {0};
        int count = 0;
        for(int j=i;j<n;j++){
            if(alpha[s[j]-'a']==0) count++;
            alpha[s[j]-'a']++;
            if(count == k) subString_count++;
            if(count > k) break;
        }
    }
    return subString_count;
}

int main(){
    string s; cin>>s;
    int k; cin>>k;
    cout<<count_Sub(s,k)<<'\n';
    return 0;
}