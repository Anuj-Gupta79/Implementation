#include<iostream>
using namespace std;
class student
{
    string name;
    char section[20];
    char roll_no[20];
    public:
    void in()
    {
        cout<<"enter the name of the student: ";
        cin>>name;
        cout<<"enter the section of the student: ";
        cin>>section;
        cout<<"enter the roll no. of the student: ";
        cin>>roll_no;
    }
    void out()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"section: "<<section<<endl;
        cout<<"roll no. : "<<roll_no<<endl;
    }
};
class marks
{
    public:
    int ca1,ca2,ca3;
    void inm()
    {
        cout<<"enter the marks of ca1: ";
        cin>>ca1;
        cout<<"enter the marks of ca2: ";
        cin>>ca2;
        cout<<"enter the marks of ca3: ";
        cin>>ca3;
    }
    void outm()
    {
        cout<<"marks : "<<ca1<<'\t'<<ca2<<'\t'<<ca3<<endl;
    }
};
class result:public student,public marks
{
    float avg;
    public:
    void avg1()
    {
        in();
        inm();
        out();
        outm();
        avg=float(ca1+ca2+ca3)/3;
        cout<<"average: "<<avg;
    }   
};
int main()
{
    result o1;
    o1.avg1();
    return 0;
}