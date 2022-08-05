#include<bits/stdc++.h>
using namespace std;

const int capacity = 10^5;

int arr[capacity];

int sorteddeleted(int size,int index){
    if(index>capacity-1 || size==0) return -1;
    else{
           for(int i=index;i<size-1;i++){
               arr[i]=arr[i+1];
            }
            return 1;
    }
}

void display(int size){
    // traversal
    cout<<"Array: ";
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<'\n';
}

int main(){
    int size; 
    cout<<"Size: "; cin>>size;
    cout<<"Elements: ";
    for(int i=0;i<size;i++) cin>>arr[i];
    int index; 
    cout<<"Index: "; cin>>index;
    if(sorteddeleted(size,index)){
        size--;
        display(size);
    } 
    else{
        cout<<"Array is underflow";
    }
    return 0;
}