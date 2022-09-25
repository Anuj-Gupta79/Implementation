#include<iostream>
using namespace std;
class abc
{
int a;
public:
abc(){};
abc(int x)
{
a=x;
}
void show()
{
cout<<a<<"\n";
}
abc operator+(int x);
};
abc abc::operator+(int x)
{
int a;
a= a+x;
return a;
}
main()
{
abc a2(1);
abc a4;
a4=a2+5;
a4.show();
return 0;
}