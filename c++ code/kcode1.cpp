#include<iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point()
    {
        x=0;
        y=0;
    }
    point(int i,int j)
    {
        x=i;
        y=j;
    }
    int out1()
    {
        return x;
    }
    int out2()
    {
        return y;
    }
};
int main()
{
    point t1(10,15);
    cout<<"the value x: "<<t1.out1()<<endl;
    cout<<"the value y:"<<t1.out2();
    return 0;
}