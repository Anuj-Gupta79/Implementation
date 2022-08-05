#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,n=2,reg_no;
    char name[30],course[30],grade[20];
    ofstream f1;
    f1.open("Student.txt");
    for(i=0;i<n;++i)
    {
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the Registration number of the student: ";
        cin>>reg_no;
        cout<<"Enter the Course of the student: ";
        cin>>course;
        cout<<"Enter the Grade of the student: ";
        cin>>grade;
        f1<<'\n'<<name<<'\t'<<reg_no<<'\t'<<course<<'\t'<<grade;
    }
    f1.close();
    ifstream f2;
    f2.open("Student.txt");
    for(i=0;i<n;++i)
    {
        f2>>name;
        f2>>reg_no;
        f2>>course;
        f2>>grade;
        cout<<"\nStudent "<<i+1<<": ";
        cout<<name<<'\t'<<reg_no<<'\t'<<course<<'\t'<<grade;
    }
    f2.close();
};