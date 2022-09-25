#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    void in()
    {
        cout<<"enter the first number: ";
        cin>>x;
    }
    friend int operator+(A &,A &);
};
int operator +(A &o1,A &o2)
{
    int sum;
    sum=o1.x+o2.x;
    cout<<"sum = "<<sum;
}
int main()
{
    A o3,o4;
    o3.in();
    o4.in();
    int y;
    y = operator+(o3,o4);
    return 0;
}