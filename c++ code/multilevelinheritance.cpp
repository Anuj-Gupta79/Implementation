#include<iostream>
using namespace std;
class input
{
    public:
    int a,a1;
    void in()
    {
        cout<<"Enter the length: ";
        cin>>a;
        a1=a;
    }
};
class reverse:public  input
{
    public:
    int r;
    int s;
    void rev()
    {
        while(a!=0)
        {
            r = a%10;
            s = s*10 + r;
            a /= 10;
        }
        cout<<"reverse : "<<s<<endl;   
    }
};
class polindrome:public  reverse
{
    public:
    void poli()
    {
        if(a1==s)
        {
            cout<<"Number is Polindrome";
        }
        else
        {
            cout<<"Number is not Polindrome";
        }
    }
}o1;
int main()
{
    o1.in();
    o1.rev();
    o1.poli();
    return 0;
}
