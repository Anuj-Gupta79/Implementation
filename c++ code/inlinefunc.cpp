#include<iostream>
using namespace std;
class op
{
    private:
    int a,b;
    public:
    void get()
    {
        cout<<"enter the first number: ";
        cin>>a;
        cout<<"enter the second number: ";
        cin>>b;
    }
    void sum();
};
inline void op::sum()
{
    cout<<"sum = "<<a+b;
}
int main()
{
    op o1;
    cout<<"the code using inline function."<<endl;
    int n;
    cout<<"enter the number of pair you want to enter: ";
    cin>>n;
    for(int i=0;i<n;++i)
    {
        o1.get();
        o1.sum();
        cout<<endl;
    }
    return 0;
}