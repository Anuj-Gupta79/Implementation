#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int num = n;
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    if(rev == num) return true;
    return false;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(palindrome(n)) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
    return 0;
}