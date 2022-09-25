#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
    private:
    int emp_code;
    char name[20];
    int age;
    int da;
    int ta;
    public:
    void read_data()
    {
        cout<<"Enter the employee code:";
        cin>>emp_code;
        cout<<"Enter the name of the employee:";
        cin>>name;
        cout<<"Enter the age,DA and TA:"<<endl;
        cin>>age>>da>>ta;
        }
        void show_data()
        {
            cout<<"\nEMP CODE: "<<emp_code;
            cout<<"\nNAME: "<<name;
            cout<<"\nAge ,DA and TA: "<<age<<"\t"<<da<<"\t"<<ta;
        }
    };
    int main()
    {
        fstream FILE;
        int n,i;
        cout<<"Enter the number of eployee you want:";
        cin>>n;
        Employee e[n],d[n];
        FILE.open("employee.txt",ios::out|ios::binary);
        cout<<"Enter the details of employees"<<endl;
        for(i=0;i<n;i++)
        {
            e[i].read_data();
            FILE.write((char *)&e[i],sizeof(e[i]));
        }
        FILE.close();
        FILE.open("employee.txt",ios::in|ios::binary);
        for(i=0;i<n;i++)
        {
            FILE.read((char*)&d[i],sizeof(d[i]));
            d[i].show_data();
        }
        return 0;
    }