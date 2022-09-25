#include<bits/stdc++.h>
using namespace std;

const int capacity = 10^5;

int arr[capacity];

int Binary_search(int size,int element){
    int beg=0; int end=size-1;
    while(beg<=end){
        int mid = (beg+end)/2;
        if(arr[mid]==element) return mid+1;
        else if(arr[mid]>element) end = mid-1;
        else if(arr[mid]<element) beg = mid+1;
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
    cout<<"Elements in sorted order: ";
    for(int i=0;i<size;i++) cin>>arr[i];
    int element;
    cout<<"Element: "; cin>>element;
    if(Binary_search(size,element)!=-1){
        cout<<"Position: "<<Binary_search(size,element);
    }
    else{
        cout<<"Element is not found.";
    }
    return 0;
}