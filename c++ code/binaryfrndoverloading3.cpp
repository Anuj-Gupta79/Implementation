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
    friend int operator+(A &,int y);
};
int operator +(A &o1,int y)
{
    int sum;
    sum=o1.x + y;
    cout<<"sum = "<<sum;
}
int main()
{
    A o3;
    o3.in();
    int z = o3 + 3;
    return 0;
}