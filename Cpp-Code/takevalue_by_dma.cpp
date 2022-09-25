#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p = new int;
    int *q = new int;
    int *r = new int(30);
    if(!p)
    {
        cout<<"momery allocation is fail";
        exit(1);
    }
    else
    {
        cout<<"memory allocated successfully"<<endl;
        *p=10;
        cout<<"Enter the value: ";
        cin>>*q;
        cout<<*p<<'\t'<<*q<<'\t'<<*r;
    }
    return 0;
}
