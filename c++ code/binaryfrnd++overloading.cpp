#include<iostream>
using namespace std;
class inc
{
    int a;
    public:
       void input()
       {
           cout<<"enter the value of a: ";
           cin>>a;
       }
       void output()
       {
           cout<<"the value of a after increament: "<<a;
       }
       friend void operator ++(inc &);
};
void operator ++(inc &o1)
{
    ++o1.a;
}
int main()
{
    inc o2;
    o2.input();
    operator++(o2);
    o2.output();
    return 0;
}