#include<iostream>
using namespace std;
int main()
{
int max, n,i;
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
max = a[0];
for(i=0; i<n; i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
}
cout<<"Maximum number in the array is: "<<max<<endl;
delete []a;
cout<<"Memory Dellocated successfully.";
}
