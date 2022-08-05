#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of 1st number: ";
    cin>>a;
    cout<<"enter the value of 2nd number: ";
    cin>>b;
    cout<<"enter the value of 3rd number: ";
    cin>>c;
    if((a>b)&&(a>c))
    {
        cout<<a<<" is the greatest number";
    }
    else if((b>c)&&(b>a))
    {
        cout<<b<<" is the greatest number";
    }
    else 
    {
        cout<<c<<" is the greatest number";
    }
    return 0;
}