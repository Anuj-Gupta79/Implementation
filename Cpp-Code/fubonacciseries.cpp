#include<iostream>
using namespace std;
int main()
{
    int x,y=0,z=1,n;
    cout<<"enter the term till you want fabonacci series: ";
    cin>>n;
    cout<<y<<" "<<z<<" ";
    for(int i=2;i<=n;++i)
    {
        x=y+z;
        cout<<x<<" ";
        y=z;
        z=x;
    }
    return 0;
}