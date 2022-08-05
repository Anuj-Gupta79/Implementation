#include<iostream>
#include<math.h>
using namespace std;
class base
{
    public:
    int n,rev,rim=0;
    void ip()
    {
        cout<<"Enter the number for check: ";
        cin>>n; 
    }
    virtual void check();
};
class polindrome:public base
{
    public:
    void poli()
    {
        rim = n%10;
        rev = rev*10 + rim;
        n = n/10;
    }
    void check()
    {
        poli();
        if(rev==n)
        {
            cout<<"Number is polindrome."<<endl;
        }
        else
        {
            cout<<"Number is not polindrome."<<endl;
        }
    }
};
class angstrom:public base
{
    public:
    int s,r,x=0,result=0,power;
    void ang()
    {
        s = n;
        while(s!=0)
        {
            s = s/10;
            x++;
        }
        while(s!=0)
        {
            r = s%10;
            power = round(pow(r,x));
            result = result + power;
            s = s/10;
        }
    }
    void check()
    {
        if(n==result)
        {
            cout<<"Number is angstrom."<<endl; 
        }
        else
        {
            cout<<"Number is not angstrom."<<endl;
        }
    }

};
int main()
{
    base* o1;
    polindrome o2;
    angstrom o3;
    o1->ip();
    o1 = &o2;
    o1->poli();
    o1->check();
    o1 = &o3;
    o1->poli();
    o1->check();
    return 0;
}