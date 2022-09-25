#include<iostream>
using namespace std;
class abc
{
int a,b,c;
public:
abc(int x, int y, int z)
{
a=x;
b=y;
c=z;
}
friend void operator-(abc);
};
void operator-(abc o1)
{
o1.a=-o1.a;
o1.b=-o1.b;
o1.c=-o1.c;
cout<<o1.a<<" "<<o1.b<<" "<<o1.c;
}
int main()
{
abc a1(5,-12,5);
-a1;
return 0;
}