#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    void in()
    {
        cout<<"enter the number: ";
        cin>>x;
    }
    void operator+(A o1)
    {
        int s;
        s=x+o1.x;
        cout<<"sum = "<<s;
    }
};
int main()
{
    A o2,o3;
    o2.in();
    o3.in();
    o2+o3;
    cout<<'\n'<<"by second way: ";
    o2.operator+(o3);
    return 0;
}