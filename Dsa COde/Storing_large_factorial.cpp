#include<bits/stdc++.h>
using namespace std;
#define max 500

int multiply(int arr[], int x, int size);

void factorial(int n){
    int arr[max];
    arr[0] = 1;
    int size = 1;
    for(int x=2;x<=n;x++){
        size=multiply(arr,x,size);
    }
    for(int i=size-1;i>=0;i--) cout<<arr[i];
}

int multiply(int arr[], int x, int size){
    int carry = 0;
    for(int i=0;i<size;i++){
        int product = arr[i]*x + carry;
        arr[i] = product%10;
        carry = product/10;
    }
    while(carry){
        arr[size]=carry%10;
        carry/=10;
        size++;
    }
    return size; 
}

int main(){
    int n; cin>>n;
    factorial(n);
    return 0;
}