#include<iostream>
using namespace std;
class Base
{
    public:
    int a=5;
    Base()
    {
        a=a-2;
        cout<<"Base constructur : "<<a<<endl;
    }
    ~Base()
    {
        a=a-2;
        cout<<"Base Destructor : "<<a<<endl;
    }
};
class Derived:public Base
{
    public:
    Derived()
    {
        ++a;
        cout<<"Derived Constructor : "<<a<<endl;
    }
    ~Derived()
    {
        --a;
        cout<<"Derived Destructor : "<<a<<endl;
    }
};
int main()
{
    Derived o1;
}