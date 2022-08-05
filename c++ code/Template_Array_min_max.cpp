#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
T FindMin(T arr[],int n)
{
    int i;
    T min;
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min > arr[i])
        min=arr[i];
    }
    return min;
}
int main()
{
    int i, iarr[5];
    char carr[5];
    double darr[5];
    cout<<"enter intger array"<<endl;
    for(i=0;i<3;i++)
    {
        cin>>iarr[i];
    }
    cout<<"enter character array"<<endl;
    for(i=0;i<3;i++)
    {
        cin>>carr[i];
    }
    cout<<"enter double array"<<endl;
    for(i=0;i<3;i++)
    {
        cin>>darr[i];
    }
    cout<<"Minimum of integer array= "<<FindMin(iarr,3)<<endl;
    cout<<"Minimum of character array= "<<FindMin(carr,3)<<endl;
    cout<<"Minimum of double array= "<<FindMin(darr,3)<<endl;
    
}

