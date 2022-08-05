#include<iostream>
using namespace std;
int main()
{
int x,a[100],b[100],n,count=0,c;
cout<<"enter the number of terms for array: ";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"enter the value of a["<<i<<"]: ";
cin>>a[i];
}
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
for(int i=0;i<n;i++)
{
if(a[i]==0)//check 0
count++;
}
for(int i=0;i<n;i++)
{
if(count>0)
{
cout<<a[i]<<" 0 ";
count--;
x=i;
}
else
break;
}
for(int i=x+1;i<n;i++)
{
if(a[i]==0)
continue;
cout<<a[i]<<" ";
}
}

