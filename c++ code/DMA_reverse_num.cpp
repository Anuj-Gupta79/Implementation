#include<iostream>
using namespace std;
int main()
{
    
    int *n = new int;
    int *rim = new int;
    int *rev = new int(0);
    if((!n)&&(!rim)&&(!rev))
    {
        cout<<"Failure of DMA"<<endl;
    }
    else
    {
        cout<<"Memory is allocated successfully."<<endl;
    }
cout<<"Enter the number: ";
cin>>*n;

while(*n>0)
{
    *rim = *n%10;
    *rev = (*rev)*10 + *rim;
    *n = *n/10;
}
cout<<"Reverse number is : "<<*rev<<endl;
delete n;
delete rim;
delete rev;
cout<<"Memory dellocated successfully.";
return 0;
}