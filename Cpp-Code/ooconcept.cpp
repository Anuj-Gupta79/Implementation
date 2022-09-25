#include<iostream>
using namespace std;
class A
{
    int n;
    public:
    void get()
    {
        cout<<"Enter the number: ";
        cin>>n;
    }
    void operator+(A o)
    {
        int s;
        s=s+o.s;
        cout<<"subtraction : "<<s;
    }
};
int main()
{
    A o2,o3;
    o2.get();
    o3.get();
    o2+o3;
    return 0;
}