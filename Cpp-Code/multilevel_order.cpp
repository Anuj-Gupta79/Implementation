#include<iostream>
using namespace std;
int a=10;
class Base1
{
    public:
    Base1()
    {
        a++;
        cout<<"Base1 constructur : "<<a<<endl;
    }
    ~Base1()
    {
        --a;
        cout<<"Base1 Destructor : "<<a<<endl;
    }
};
class Base2:public Base1
{
    public:
    Base2()
    {
        ++a;
        cout<<"Base2 constructur : "<<a<<endl;
    }
    ~Base2()
    {
        --a;
        cout<<"Base2 Destructor : "<<a<<endl;
    }
};
class Derived:public  Base2
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