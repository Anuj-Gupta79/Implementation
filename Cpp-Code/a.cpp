#include<iostream>
using namespace std;
class sum
{
    int x,y;
    public:
    void in()
    {
        cout<<"Enter the first number: ";
        cin>>x;
        cout<<"Enter the second number: ";
        cin>>y;
    }
    void out()
    {
        cout<<"Sum: "<<x+y;
    }
};
int main()
{
    sum o1;
    o1.in();
    o1.out();
    return 0;
}