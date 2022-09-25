#include<iostream>
using namespace std;
template<class T>
void sum(T x,T y)
{
    cout<<x+y<<endl;
}
int main()
{
    sum(2,3);
    sum(2.3,1.1);
    sum('a','b');
    return 0;
}

