#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> bracket={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string Balanced(string s){
    stack<char>st;
    for(auto &ch:s){
        if(bracket[ch]<0) st.push(ch);
        else{
            if(st.empty()) return "No";
            else{
                char top=st.top();
                st.pop();
                if(bracket[top]+bracket[ch]!=0) return "No";
            }
        }
    }
    if(st.empty()) return "Yes";
    return "No";
}

int main(){
    string s;
    cin>>s;
    cout<<Balanced(s)<<endl;
    return 0;
}