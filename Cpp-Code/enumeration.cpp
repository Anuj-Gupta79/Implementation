#include<iostream>
using namespace std;
int main()
{
    enum month{Jan,Feb,Mar,Apr,May,June,July,Aug,Sep,Oct,Nov,Dec};
    month n1,n2,n3,n4;
    n1=May;
    n2=Aug;
    n3=Feb;
    n4=Apr;
    cout<<n1+1<<'\t'<<n2+1<<'\t'<<n3+1<<'\t'<<n4+1<<endl;
    if(n2<n3)
    {
        cout<<"n2 comes first n2";
    }
    else
    {
        cout<<"n3 comes first";
    }
    return 0;
}