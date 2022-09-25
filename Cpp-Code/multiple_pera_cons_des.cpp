#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A(int x)
    {
        a=x;
        cout<<x<<endl;
    }
    ~A()
    {
        cout<<"A Destructor : "<<endl;
    }
};
class B: public A
{
    public:
    int b,c;
    B(int x,int y,int z):A(x)
    {
        b=y;
        c=z;
        cout<<b<<'\t'<<c<<endl;
    }
    ~B()
    {
        cout<<"B Destructor : "<<endl;
    }
};
int main()
{
    B o1(1,2,3);
}