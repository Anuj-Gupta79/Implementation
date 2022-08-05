#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows: "; cin>>n;
    cout<<"Enter the number of columns: "; cin>>m;
    cout<<"Enter the elements: "<<'\n';
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<"Transposed Matrix: "<<'\n';
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}