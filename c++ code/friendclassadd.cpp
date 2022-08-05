#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
    void in()
    {
        cout<<"enter the first number: ";
        cin>>x;
    }
    friend int add(class A, class B);
}c;
class B
{
    int y;
    public:
    void in()
    {
        cout<<"enter the second number: ";
        cin>>y;
    }
    friend int add(class A,class B);
}d;
int add(class A o1,class B o2)
{
    int sum;
    sum = o1.x + o2.y;
    return sum;
}
int main()
{
    c.in();
    d.in();
    cout<<"sum = "<<add(c,d);
    return 0;
}