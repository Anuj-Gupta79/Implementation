#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a";
    cin>>a;
    try
    {
        if (a==0)
        throw a;
        if (a==1)
        throw 3.1;
        if(a==-1)
        throw 'a';
        cout<<a;
    }
    catch(int)
    {
        cout<<"no.";
    }
    catch(...)
    {
        cout<<"no.!=0,1,-1";
    }
    return 0;
}