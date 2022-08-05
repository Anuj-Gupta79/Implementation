#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of items you want: ";
    cin>>n;
    char a[n];
    int b[n],c[n];
    for(int i=0;i<n;++i)
    {
        cout<<"ENter the code for item "<<i+1<<" : ";
        cin>>a[i];
        cout<<"Enter the price for the item "<<i+1<<" : ";
        cin>>b[i];
        cout<<"Enter the quantity for the same item : ";
        cin>>c[i];
    }
    for(int i=0;i<n;++i)
    {
        cout<<"Data of given item "<<i+1<<" : "<<a[i]<<"  "<<b[i]<<endl;
        sum = sum+b[i]*c[i];
    }
    cout<<"Final bill is: "<<sum;
    return 0;
}