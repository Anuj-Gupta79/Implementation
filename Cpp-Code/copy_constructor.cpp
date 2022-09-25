#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int a;
    int length,breadth;
    public:
    Rectangle()
    {
        cout<<"\n def cons invoked";
        length=5,breadth=6;
    }
    Rectangle(int l,int b)
    {
        cout<<"\n para cons invoked";
        length=l;breadth=b;
        }
    Rectangle(Rectangle &r)
    {
        cout<<"\n copy cons invoked";
        length=r.length;
        breadth=r.breadth;
    }
    void area()
    {
    a=length*breadth;
     cout<<"\narea is "<<a;
    }
    
};
int main()
{
    Rectangle r1,r2(2,3),r3(r2);
    r1.area();
    r2.area();
    r3.area();
    return 0;
}