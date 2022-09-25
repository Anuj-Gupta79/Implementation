#include<iostream>
using namespace std;
class A
{
int x;
public:
A(int t)
{
x=t;
cout<<x<<endl;
cout<<"base class with parameters"<<endl;
}
~A()
{
cout<<"base class detructed";
}
};
class B
{
int y;
public:
B(int p)
{
y=p;
cout<<y<<endl;
cout<<"second base class"<<endl;
}
~B()
{
cout<<"second base class destructed:"<<endl;
}
};
class derived:public A,public B
{
int z;
public:
derived(int q,int r, int s):A(r),B(s)
{
z=q;
cout<<z<<endl;
cout<<"derived class"<<endl;
}
~derived()
{
cout<<"derived class destructed:"<<endl;
}
};
main()
{
derived obj(20,40,30);
}


