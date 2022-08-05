#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p=new int;
    if(!p)
    {
        cout<<"momery allocation is fail";
        exit(1);
    }
    else
    {
        cout<<"memory allocated successfully";
    }
    return 0;
}
