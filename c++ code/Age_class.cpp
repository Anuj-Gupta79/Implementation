#include<iostream>
using namespace std;
class birth
{
    int x1,y1,z1,x2,y2,z2;
    public:
    birth(int a,int b,int c)
    {
        x1=a;
        y1=b;
        z1=c;
        cout<<"current date : ";
        cout<<x1<<"/"<<y1<<"/"<<z1;
    }
    void date()
    {
        cout<<"\nEnter your birthdate in the formate of (DD/MM/YYY): ";
        cin>>x2>>y2>>z2;
    }
    void age()
    {
        cout<<"Your age is : ";
        if(z1>z2)
        {
            cout<<z1-z2<<" Years ";
        }
        else
        {
            cout<<z2-z1<<" Years ";
        }
        if(y1>y2)
        {
            cout<<y1-y2<<" Months ";
        }
        else
        {
            cout<<y2-y1<<" Months ";
        }
        if(x1>x2)
        {
            cout<<x1-x2<<" Days ";
        }
        else
        {
            cout<<x2-x1<<" Days ";
        }
    }
        
};
int main()
{
    int a,b,c;
    cout<<"Enter the date on the formate of (DD/MM/YYYY): ";
    cin>>a>>b>>c;
    birth o1(a,b,c);
    o1.date();
    o1.age();
    return 0;
}