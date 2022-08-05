#include<iostream>
using namespace std;
int main()
{
    int a,b,temp=0;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"the value of a : "<<a<<'\n'<<"the value of b : "<<b;
    return 0;

}