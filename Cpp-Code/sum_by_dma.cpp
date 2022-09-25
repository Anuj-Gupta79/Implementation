#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p = new int;
    float *q = new float;
    char *r = new char;
    if(!p)
    {
        cout<<"momery allocation is fail";
        exit(1);
    }
    else
    {
        cout<<"memory allocated successfully"<<endl;
        cout<<"Enter the integer number: ";
        cin>>*p;
        cout<<"Enter the float number: ";
        cin>>*q;
        cout<<"Enter the character: ";
        cin>>*r;
        cout<<"sum : "<<*p+*q+*r;
    }
    delete p;
    return 0;
}
