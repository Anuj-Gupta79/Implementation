#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int x)
    {
        a=x;
    }
    freind void sub();
};
void sub(A y)
{
    cout<<"enter the value of a: ";
    cin>>y.a;
    int s;
    s=y.a-a;
    cout<<"subtraction = "<<y.a;
}
int main()
{
    A o2;
    sub(o2);
    return 0;
}
