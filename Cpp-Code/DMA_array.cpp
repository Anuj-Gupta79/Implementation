#include<iostream>
using namespace std;
int main()
{
int sum=0, n;
cout<<"Enter array size:";
cin>>n;
int *a = new int[n];
if(!*a)
{
    cout<<"Failure of DMA"<<endl;
}
else
{
    cout<<"Memory is allocated successfully."<<endl;
}
cout<<"Enter "<<n<<" integer numbers:"<<endl;
for(int i=0; i<n; i++)
cin>>a[i];
cout<<"Input array is: ";
for(int i=0;i<n;++i)
{
    cout<<a[i]<<"  ";
    sum = sum + a[i];
}
cout<<"\nTotal Sum of the elements: "<<sum;
delete []a;
}
