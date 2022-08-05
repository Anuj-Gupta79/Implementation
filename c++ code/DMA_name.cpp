#include<iostream>
using namespace std;
int main()
{
    
    string *a = new string;
    if(!a)
    {
        cout<<"Failure of DMA"<<endl;
    }
    else
    {
        cout<<"Memory is allocated successfully."<<endl;
    }
cout<<"Enter the name: ";
cin>>*a;
cout<<"Name : "<<*a<<endl;
delete a;
cout<<"Memory dellocated successfully.";
return 0;
}