#include<iostream>
using namespace std;
class student
{
	public:
    char name[30];
	int roll_number;
		void get1()
		{
			cout<<"Enter the name: ";
            cin>>name;
            cout<<"enter the roll no.: ";
            cin>>roll_number;
		}
};
class general:public virtual student
{
    public:
    char section[20];
    int cgpa;
		void get2()
		{
            cout<<"Enter the section: ";
            cin>>section;
            cout<<"enter the CGPA: ";
            cin>>cgpa;
        }
};
class result:public virtual student
{
	public:
    int m1,m2,m3,m4;
    float percentage;
		void get3()
		{
			cout<<"enter the marks S1: ";
            cin>>m1;
            cout<<"enter the marks S2: ";
            cin>>m2;
            cout<<"enter the marks S3: ";
            cin>>m3;
            cout<<"enter the marks S4: ";
            cin>>m4;
		}
		void put()
		{
			float percentage=(m1+m2+m3+m4)/4;
		}
};
class display:public general,public result
{
    public:
    void dis()
    {
         get1();
         get2();
         get3();
         put();
         cout<<"Name: "<<name<<endl;
         cout<<"Roll number: "<<roll_number<<endl;
         cout<<"section: "<<section<<endl;
         cout<<"CGPA: "<<cgpa<<endl;
         cout<<"Marks of all the subject:"<<'\t'<<m1<<'\t'<<m2<<'\t'<<m3<<'\t'<<m4<<'\t'<<endl;
         cout<<"Percentage: "<<percentage;
    }
};
int main()
{
	display o1;
    o1.dis();
	return 0;
}



