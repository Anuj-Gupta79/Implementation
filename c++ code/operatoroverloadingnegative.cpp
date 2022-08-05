#include<iostream>
using namespace std;
class posinega
{
    int x,y;
    public:
    void input()
    {
        cout<<"enter the value for x: ";
        cin>>x;
        cout<<"enter the value for y: ";
        cin>>y;
    }
    void output()
    {
        cout<<"the value of x: "<<x<<'\n'<<"the value of y: "<<y;
    }
    void operator -()
    {
        x=-x;
        y=-y;
    }
};
int main()
{
    posinega t1,t2;
    t1.input();
    cout<<"value before overloading: "<<'\n';
    t1.output();
    -t1;
    cout<<'\n'<<"value after overloading: "<<'\n';
    t1.output();
    cout<<endl;
    t2.input();
    cout<<"value before overloading: "<<'\n';
    t2.output();
    -t2;
    cout<<'\n'<<"value after overloading: "<<'\n';
    t2.output();
}