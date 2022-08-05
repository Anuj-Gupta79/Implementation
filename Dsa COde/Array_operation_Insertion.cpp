#include<bits/stdc++.h>
using namespace std;

const int capacity = 10^5;

int arr[capacity];

int sortedInserted(int size,int index,int element){
    if(size>=capacity ) return -1;
    else{
           for(int i=size-1;i>=index;i--){
               arr[i+1]=arr[i];
            }
            arr[index]=element;
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
    int element;
    cout<<"Element: "; cin>>element;
    if(sortedInserted(size,index,element)){
        size++;
        display(size);
    } 
    else{
        cout<<"Array is overflow";
    }
    return 0;
}