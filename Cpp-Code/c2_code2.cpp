#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class Employee
{
    char name[30];
    int id,salary,i;
    public:
    void get_data()
    {
        ofstream f1;
        f1.open("Employee_Data.bin");
        cout<<"Enter the name of Employee: ";
        cin>>name;
        cout<<"Enter the ID of Employee: ";
        cin>>id;
        cout<<"Enter the salary of Employee: ";
        cin>>salary;
        f1<<name<<'\t'<<id<<'\t'<<salary<<endl;
        f1.close();
    }
    void display_data()
    {
        ifstream f2;
        f2.open("Employee_Data.bin");
        cout<<"Employee Data: "<<name<<"  "<<id<<"  "<<salary<<endl;
        f2.close();
    }
};
int main()
{
    Employee obj[4];
    for(int i=0;i<4;++i)
    {
        cout<<"Employee "<<i+1<<endl;
        obj[i].get_data();
    }
    for(int i=1;i<3;++i)
    {
        cout<<"Employee "<<i+1<<endl;
        obj[i].display_data();
    }
    return 0;
}