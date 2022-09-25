#include<iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    int clas;
    int marks;
    public:
    void input()
    {
        cout<<"enter the name of the student: ";
        cin>>name;
        cout<<"enter the roll number of the student";
        cin>>rollno;
        cout<<"enter the class of the student: ";
        cin>>clas;
        cout<<"enter the marks of the student: ";
        cin>>marks;
    }
    void output()
    {
        cout<<"result"<<'\n'<<"name: "<<name<<'\n'<<"roll no. : "<<rollno<<'\n'<<"class: "<<clas<<'\n'<<"marks: "<<marks<<endl;
    }
};
int main()
{
    student o1;
    int n;
    cout<<"enter the number of the student you want : ";
    cin>>n;
    for(int i=0;i<n;++i)
    {
        o1.input();
        o1.output();
    }
    return 0;
}