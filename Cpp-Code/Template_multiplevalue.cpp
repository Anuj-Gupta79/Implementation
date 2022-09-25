#include<iostream>
using namespace std;
template<class p1,class p2>
void sum(p1 x,p2 y)
{
    cout<<x+y<<endl;
}
int main()
{
    sum(2,3);
    sum(2.3,1.1);
    sum('a','b');
    sum(2,'a');
    return 0;
}

