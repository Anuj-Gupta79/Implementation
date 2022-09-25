#include<iostream>
using namespace std;
class employee
{
    char name[30];
    int id,salary;
    public:
    void in()
    {
        cout<<"Enter the name of the employee: ";
        cin>>name;
        cout<<"Enter the ID of the employee: ";
        cin>>id;
        cout<<"Enter the salary of the employee: ";
        cin>>salary;
    }
    void out()
    {
        cout<<"Employee Data: "<<name<<"  "<<id<<"  "<<salary<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of employee that you want: ";
    cin>>n;
    employee *p = new employee[n];
    employee *a=p;
    if(!p)
    {
        cout<<"DMA is fail."<<endl;
        exit (1);
    }
    else
    {
        cout<<"MEmory allocated successfully."<<endl;
    }
    for(int i=1;i<=n;++i)
    {
        p->in();
        p++;
    }
    for(int i=1;i<=n;++i)
    {
        a->out();
        ++a;
    }
    delete []p;
    cout<<"Memory deallocated successfully.";
    return 0;
}
