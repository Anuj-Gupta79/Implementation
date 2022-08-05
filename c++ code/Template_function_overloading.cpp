#include <iostream>
using namespace std;
template<class T>
void display(T x)
{
    cout<<"inside template"<<x<<endl;
}
template<class T>
void display(T x,T y)
{
    cout<<x<<" "<<y<<endl;
}
void display(int x)
{
    cout<<"inside normal fnc"<<x<<endl;
}
int main()
{
    display(3.1);
    display(6);
    display(3,9);
    display('a','b');
    display(3);
    return 0;
}