#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a";
    cin>>a;
    try
    {
        if(a==0)
        throw a;
        if(a==1)
        throw 3.1;
        if(a==-1)
        throw 'a';
        cout<<a;
    }
    catch(int x)
    {
        cout<<"Exception code no.!=0";
    }
    catch(double x)
    {
        cout<<"Exception code no.!=1";
    }
    catch(char x)
    {
        cout<<"Exception code no.!=-1";
    }
}