#include<iostream>
using namespace std;
class input
{
    public:
    float l;
    float b;
    float r;
    float s;
    void in1()
    {
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the width: ";
        cin>>b;
    }
    void in2()
    {
        cout<<"Enter the radius: ";
        cin>>r;
    }
    void in3()
    {
        cout<<"Enter the side: ";
        cin>>s;
    }

};
class rectangle:public input
{
    public:
    void arear()
    {
        cout<<"Area of the Rectangle: "<<l*b<<endl;
    }

}o1;
class circle:public input
{
    public:
    void areac()
    {
        cout<<"Area of the Circle: "<<3.14*r*r<<endl;
    }

}o2;
class square:public input
{
    public:
    void areas()
    {
        cout<<"Area of the Square: "<<s*s<<endl;
    }

}o3;
int main()
{
    o1.in1();
    o1.arear();
    o2.in2();
    o2.areac();
    o3.in3();
    o3.areas();
    return 0;
}