#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cout<<"enter the number for check: ";
    cin>>a;
    if((a==0)||(a==1))
    {
        cout<<a<<" is neither prime nor non-prime";
    }
    else
    {
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                cout<<a<<" is non-prime number";
                break;
            }
            else
            {
                cout<<a<<" is prime number";
            }
        }
    }
    return 0;
}