#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    void read()
    {
        cout<<"Enter the first distance: ";
        cin>>x;
        cout<<"Enter the second distance: ";
        cin>>y;
    }
    void display()
    {
        cout<<"Entered distances:  "<<x<<"  "<<y<<endl;
    }
    void add()
    {
        cout<<"Addition of two distances is "<<x+y<<endl;
    }
    void sub()
    {
        cout<<"subtraction of two distances is "<<x-y<<endl;
    }
};
int main()
{
    A o1;
    o1.read();
    o1.display();
    o1.add();
    o1.sub();
    return 0;
}