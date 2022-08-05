#include<iostream>
using namespace std;
int main()
{
    int *a = new int;
    float *b = new float;
    char *c = new char;
    if((!a)&&(!b)&&(!c))
    {
        cout<<"Failure of DMA"<<endl;
    }
    else
    {
        cout<<"Memory is allocated successfully."<<endl;
    }
    cout<<"Enter the int value: ";
    cin>>*a;
    cout<<"Enter the float value: ";
    cin>>*b;
    cout<<"Enter the char value: ";
    cin>>*c;
    cout<<"Sum of three values: "<<*a+*b+*c<<endl;
    delete a;
    delete b;
    delete c;
    cout<<"Memory has deleted";
}