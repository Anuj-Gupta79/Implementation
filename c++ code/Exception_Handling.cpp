#include<iostream>
using namespace std;
int main()
{
    int a,b,x;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    x = a-b;
    try
    {
        if(a!=b)
        {
            cout<<"Result(a/x): "<<a/x;
        }
        else
        {
            throw x;
        }
    }
    catch(int i)
    {
        cout<<"Exception at x::x = "<<x<<endl;
        cout<<"x!=0";
    }
    cout<<"\nEnd";
    return 0;
}