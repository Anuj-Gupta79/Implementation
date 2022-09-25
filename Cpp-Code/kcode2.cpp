#include<iostream>
using namespace std;
void increament(int a)
{
    a++;
    cout<<"value in function increament: "<<a<<endl;
}
int main()
{
    int x=5;
    increament(x);
    cout<<"value in function main: "<<x<<endl;
    return 0;
}