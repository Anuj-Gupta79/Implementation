#include<iostream>
using namespace std;
int main()
{
    int n,i;
    char search;
    cout<<"Enter the size of array : ";
    cin>>n;
    char *p = new char[n];
    if(!*p)
    {
        cout<<"DMA is fail.";
        exit (1);
    }
    else
    {
        cout<<"Memory allocated successfully."<<endl;
    }
    for(i=0;i<n;++i)
    {
        cout<<"Enter the value for a["<<i<<"]: ";
        cin>>p[i]; 
    }
    cout<<"Elements of the array: "<<endl;
    for(i=0;i<n;++i)
    {
        cout<<p[i]<<'\t';
    }
    cout<<"\nEnter the value for search: ";
    cin>>search;
    for(i=0;i<n;++i)
    {
        if(search==p[i])
        {
            cout<<"Entered value is at "<<i+1<<" position.";
            break;
        }
    }
    if(i==n)
    {
        cout<<"Number is not found in array.";
    }
    delete []p;
    cout<<"\nMemory is dellocated successfully.";
    return 0;
}