#include<iostream>
using namespace std;
class Base
{
    int x,y;
    public:
    Base(int p,int q)
    {
        x=p;
        y=q;
    }
};
class Derived:public Base
{
    int z;
    public:
    Derived(int p,int q,int r):Base(p,q)
    {
        z=r;
        cout<<p<<'\t'<<q<<'\t'<<r;
    }
};
int main()
{
    Derived o1(2,3,4);
    return 0;
}