#include<bits/stdc++.h>
using namespace std;

bool parenthesis(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='(') st.push(s[i]);
        else if(s[i]==']' || s[i]=='}' || s[i]==')'){
            if(s[i]==']' && st.top() == '[') st.pop();
            if(s[i]==')' && st.top() == '(') st.pop();
            if(s[i]=='}' && st.top() == '{') st.pop();
        }
    }
    for(int i=0;i<st.size();i++){
        if(st.top() == '[' || st.top() == ']' || st.top() == '{' || st.top() == '}' || st.top() == '(' || st.top() == ')'){
            return false;
        }
        st.pop();
    }
    return true;
}

int main(){
    string s; cin>>s;
    if(parenthesis(s)) cout<<"Balanced Expression.\n";
    else cout<<"Unbalanced Expression.\n";
    return 0;
}