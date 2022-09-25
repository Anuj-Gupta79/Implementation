#include<iostream>
using namespace std;
class A
{
int s;
public:
A(int t)
{
s=t;
cout<<s<<endl;
cout<<"base class with parameters"<<endl;
}
~A()
{
cout<<"base class detructed";
}
};
class B:public A
{
int d,m;
public:
B(int x,int z, int y):A(z)
{
d=x;
m=y;
cout<<d<<endl<<m<<endl;
cout<<"derived class with parameters"<<endl;
}
~B()
{
cout<<"Derived class destructed:"<<endl;
}
};
main()
{
B obj(20,40,30);
}