#include<iostream>
using namespace std;
class Question3
{
    protected:
    int x;
    public:
    virtual void task() = 0;
};
class Sub1:public Question3
{
    public:
    int rev=0,rim;
    void get_data1()
    {
        cout<<"Enter the value for x: ";
        cin>>x;
    }
    void task()
    {
        get_data1();
        while(x!=0)
        {
            rim = x%10;
            rev = rev*10 + rim;
            x = x/10;
        }
        cout<<"Reverse of x: "<<rev;
    }
};
int main()
{
    Question3 *ptr;
    Sub1 o1;
    ptr = &o1;
    ptr->task();
    return 0;
}