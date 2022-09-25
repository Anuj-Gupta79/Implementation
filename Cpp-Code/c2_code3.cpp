#include<iostream>
using namespace std;
class Employee
{
    private:
    char name[10];
    int id,salary;
    public:
    void get_name()
    {
        cin>>name;
    }
    void get_id()
    {
        cin>>id;
    }
    void get_salary()
    {
        cin>>salary;
    }
    void display_data()
    {
        cout<<name<<'\t'<<id<<'\t'<<salary<<endl;
    }
    bool operator <(const Employee &A)
    {
        if(salary<A.salary)
        {
            return true;
        }
        else
        {
           return false;
        }
    }
};
int main()
{
    Employee obj[4];
    for(int i=0;i<4;++i)
    {
        cout<<"Employee "<<i+1<<endl;
        cout<<"Enter the name: ";
        obj[i].get_name();
        cout<<"Enter the Id: ";
        obj[i].get_id();
        cout<<"Enter the salary: ";
        obj[i].get_salary();
    }
    if((obj[1]<obj[2])&&(obj[1]<obj[3])&&(obj[1]<obj[4]))
    {
        cout<<"Employee Data: ";
        obj[1].display_data();
    }
    else
    {
        if((obj[2]<obj[1])&&(obj[2]<obj[3])&&(obj[2]<obj[4]))
        {
            cout<<"Employee Data: ";
            obj[2].display_data();
        }
        else
        {
            if((obj[3]<obj[1])&&(obj[3]<obj[2])&&(obj[3]<obj[4]))
            {
                cout<<"Employee Data: ";
                obj[3].display_data();
            }
            else
            {
                cout<<"Employee Data: ";
                obj[4].display_data();
            }
        }
    }
    return 0;
}