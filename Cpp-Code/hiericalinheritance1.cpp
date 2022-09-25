#include<iostream>
using namespace std;
class person
{
    char name[20];
    int phone;
    public:
    void get()
    {
        cout<<"enter the name : ";
        cin>>name;
        cout<<"enter the phone number : ";
        cin>>phone;
    }
    void put()
    {
        cout<<"the name :"<<name<<endl;
        cout<<"the phone number : "<<phone<<endl;
    }
};
class student: public person
{
    int roll;
    int reg_no;
    public:
    void read()
    {
        cout<<"enter the roll number : ";
        cin>>roll;
        cout<<"enter the registration number : ";
        cin>>reg_no;
    }
    void show()
    {
        cout<<" The roll number :"<<roll<<endl;
        cout<<"the registration number : "<<reg_no<<endl;
    }
};
class exam: public student
{
    float marks;
    public:
    void getdata()
    {
        get();
        read();
        cout<<"enter the marks of the student:";
        cin>>marks;
    }
    void putdata()
    {
        put();
        show();
        cout<<" the marks of the student is:"<<marks<<endl;
    }
}o;
int main()
{
    o.getdata();
    o.putdata();
    return 0;
}