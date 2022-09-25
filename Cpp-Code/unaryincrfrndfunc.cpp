#include<iostream>
using namespace std;
class incr
{
int a,b,c;
public:
incr(int x, int y, int z)
{
a=x;
b=y;
c=z;
}
friend void operator++(incr);
};
void operator++(incr o1)
{
++o1.a;
++o1.b;
++o1.c;
cout<<o1.a<<" "<<o1.b<<" "<<o1.c;
}
int main()
{
incr a1(10,20,30);
++a1;
return 0;
}