#include<iostream>
using namespace std;

int main(){
    int p; cin >> p;
    int a[p];
    for(int i=0;i<p;i++) cin>>a[i];
    int n,m; cin>>n>>m;
    int count = 0;
    for(int i=0;i<=p-m;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i+j];
        }
        if(sum==n) count++;
    }
    cout<<count<<'\n';
    return 0;
}