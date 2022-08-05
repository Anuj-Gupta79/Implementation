#include<iostream>
using namespace std;
class add
{
    int a,b,c;
    public:
    int sum(int a,int b,int c)
    {
        cout<<"Sum of three number: "<<a+b+c<<endl;
    }    
    int sum(int a,int b)
    {
        cout<<"Sum of two number: "<<a+b<<endl;
    }
};
int main()
{
    add o1;
    o1.sum(1,2,3);
    o1.sum(2,3);
    return 0;
}