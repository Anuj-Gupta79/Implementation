#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    void in()
    {
        cout<<"enter the first number: ";
        cin>>x;
        cout<<"enter the second number:";
        cin>>y;
    }
    friend void operator+(A &,A &);
};
void operator +(A &o1,A &o2)
{
    int sum;
    sum=o1.x+o2.x;
    sum=o1.y+o2.y;
    cout<<"sum = "<<sum;
}
int main()
{
    A o3,o4;
    o3.in();
    o4.in();
    o3+o4;
    cout<<'\n'<<"other way to sum"<<endl;
    operator+(o3,o4);
    return 0;
}