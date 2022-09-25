#include<iostream>
using namespace std;
void three(int x,int y,int z)
{
    cout<<"We are outside the try block."<<endl;
    if((x-y)!=0)
    {
        cout<<"Result(z/(x-y)): "<<z/(x-y)<<endl;
    }
    else
    {
        throw (x-y);
    }
}
int main()
{
    int a,b,c,n;
    cout<<"Enter the numebr of term you want to excute the code: ";
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
        cout<<"Enter the value of c: ";
        cin>>c;
        try
        {
            cout<<"We are inside the try block."<<endl;
            three(a,b,c);
        }
        catch(int i)
        {
            cout<<"Exception found at (a-b)::(a-b) = "<<(a-b)<<endl;
            cout<<"(a-b)!=0"<<endl;;
        }
    }
    cout<<"End";
    return 0;
}