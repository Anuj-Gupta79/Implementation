#include<iostream>
using namespace std;
class decre
{
    int x,y;
    public:
    decre(int a,int b)
    {
        x=a;
        y=b;
    }
    void out()
    {
        cout<<"x: "<<x<<'\n'<<"y: "<<y;
    }
    void operator--()
    {
        cout<<'\n'<<"after prefix: ";
        --x;
        --y;
    }
    decre operator--(int)
    {
        cout<<'\n'<<"result after postfix: ";
        x--;
        y--;
    }
};
int main()
{
    decre o1(12,14),o2(5,9);
    o1.operator--();
    o1.out();
    o1--;
    o1.out();
    --o2;
    o2.out();
    o2--;
    o2.out();
    return 0;
}