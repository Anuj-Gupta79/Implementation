#include<iostream>
using namespace std;
class circle
{
    double r;
    public:
    double input()
    {
        cout<<"enter the radius: ";
        cin>>r;
    }
    double area()
    {
        return 3.14*r*r;
    }
};
int main()
{
    circle o1;
    o1.input();
    cout<<"Area of the circle is: "<<o1.area();
    return 0;
}