#include<bits/stdc++.h>
using namespace std;

const int capacity = 10^5;

int arr[capacity];

int linear_search(int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element) return i+1;
    }
    return -1;
}

void display(int size){
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<'\n';
}

int main(){
    int size;
    cout<<"Size: "; cin>>size;
    cout<<"Elements: ";
    for(int i=0;i<size;i++) cin>>arr[i];
    int element;
    cout<<"Element: "; cin>>element;
    if(linear_search(size,element)!=-1){
        cout<<"Position: "<<linear_search(size,element);
    }
    else{
        cout<<"Element is not found.";
    }
    return 0;
}