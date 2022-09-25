#include<iostream>
using namespace std;
class inc
{
    int a,b;
    public:
       void input()
       {
           cout<<"enter the value of a: ";
           cin>>a;
           cout<<"enter the value of b: ";
           cin>>b;
       }
       void output()
       {
           cout<<"the value of a: "<<a<<'\n'<<"the value of b: "<<b;
       }
       void operator ++()
       {
           ++a;
           ++b;
       }
};
int main()
{
    inc o1;
    o1.input();
    cout<<"the value before using operator overloading"<<'\n';
    o1.output();
    ++o1;
    cout<<'\n'<<"the value after use of operator overloading"<<'\n';
    o1.output();
    return 0;
}