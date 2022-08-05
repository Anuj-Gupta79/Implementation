#include<iostream>
using namespace std;
class A
{
int x,y;
public:
A(int a, int b)
{
x=a;
y=b;
cout<<x<<" "<<y<<endl;
cout<<"base class with parameters"<<endl;
}
~A()
{
cout<<"base class detructed";
}
};
class B:public A
{
int z;
public:
B(int a,int b, int c):A(b,c)
{
z=a;
cout<<z<<endl;
cout<<"derived class 1 with parameters"<<endl;
}
~B()
{
cout<<"Derived class 1 destructed:"<<endl;
}
};
class C:public B
{
int p,q;
public:
C(int a,int b,int c,int d,int e):B(c,d,e)
{
p=a;
q=b;
cout<<p<<" "<<q<<endl;
cout<<"derived class 2 with parameters"<<endl;
}
~C()
{
cout<<"Derived class 2 destructed:"<<endl;
}
};
int main()
{
C obj(20,30,40,50,60);
}

