#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    protected:
    char claas[20];
    public:
    char roll_no[20];
    void in()
    {
        cout<<"enter the name of the student: ";
        cin>>name;
        cout<<"enter the class of the student: ";
        cin>>claas;
        cout<<"enter the  roll no. of the student: ";
        cin>>roll_no;
    }
    void out()
    {
         cout<<"Name: "<<name<<'\n';
    }
};
class fees:public student
{
    private:
    int fees;
    public:
    char section[20];
    void in1()
    {
        in();
        cout<<"enter the section of the student: ";
        cin>>section;
        cout<<"enter the fees of the student: ";
        cin>>fees;
    }
    void out1()
    {
        out();
         cout<<"Class: "<<claas<<'\n'<<"Roll no.: "<<roll_no<<'\n'<<"section: "<<section<<'\n'<<"fees: "<<fees<<endl;
    }
};
int main()
{
    fees o1;
    o1.in1();
    o1.out1();
    return 0;
}