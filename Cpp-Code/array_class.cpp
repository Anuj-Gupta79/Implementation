#include<iostream>
using namespace std;
class array
{
    int n,add=0;
    int a[100];
    public:
    void read()
    {
        cout<<"Enter the number of elements you want : ";
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cout<<"Enter the value for a["<<i<<"]: ";
            cin>>a[i];
        }
    }
    void display()
    {
        cout<<"Array : ";
        for(int i=0;i<n;++i)
        {
            cout<<a[i]<<"  ";
        }
    }
    void largest()
    {
        int max;
        max=a[0];
        for(int i=0;i<n;++i)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
        cout<<"\nMaximum value of the element in the array : "<<max<<endl;
    }
    void smallest()
    {
        int min;
        min=a[0];
        for(int i=0;i<n;++i)
        {
            if(min>a[i])
            {
                min=a[i];
            }
        }
        cout<<"Minimum value of the element in the array: "<<min<<endl;
    }
    void sum()
    {
        for(int i=0;i<n;++i)
        {
            add=add+a[i];
        }
        cout<<"Sum of the array elements: "<<add<<endl;
    }
    void result()
    {
        read();
        display();
        largest();
        smallest();
        sum();
        float mean;
        mean=add/n;
        cout<<"Mean of the array elements : "<<mean;
    }
};
int main()
{
    array o1;
    o1.result();
    return 0;
}