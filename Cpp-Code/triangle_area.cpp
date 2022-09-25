#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
    float x,y,z;
    public:
    void get()
    {
        cout<<"Enter the first side of triangle: ";
        cin>>x;
        cout<<"Enter the second side of triangle: ";
        cin>>y;
        cout<<"Enter the third side of triangle: ";
        cin>>z;
    }
    float per()
    {
        cout<<"Perimeter of the triangle: "<<x+y+z<<endl;
    }
    float area()
    {
        float s,a;
        s=(x+y+z)/2;
        a=(s)*(s-x)*(s-y)*(s-z);
        cout<<"Area of the triangle: "<<sqrt(a)<<endl;
    }
    void check()
    {
        get();
        if((((x+y)>z)&&((x+z)>y)&&((y+z)>x)))
        {
            per();
            area();
        }
        else
        {
            cout<<"Triangle cannot be form by given pair of side."<<endl;
        }
    }
};
int main()
{
    triangle o1;
    o1.check();
    return 0;
}