#include<iostream>
using namespace std;
int main()
{
   int x,y,z;
   cout<<"Enter the the value of x: ";
   cin>>x;
   cout<<"Enter the value of y: ";
   cin>>y;
   try
   {
       if(y==0)
       {
           throw 0;
           z=x/y;
           cout<<z;
       }
   }
   catch(int x)
   {
       cout<<"y!=0";
   }
}
