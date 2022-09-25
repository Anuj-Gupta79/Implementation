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
    void operator+(int y)
    {
        int s;
        s=x+y;
        cout<<"sum = "<<s;
    }
};
int main()
{
    A o2;
    o2.in();
    o2+63;
    return 0;
}