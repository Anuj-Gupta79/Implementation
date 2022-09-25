#include<iostream>
#include<string>
using namespace std;
class student
{
string name;
int age;
public:
void getdata()
{
cout<<"\nenter name";
//name=new char[6];
cin>>name;
cout<<"\nenter age";
cin>>age;
}
void display()
{
cout<<"\nthe name of student="<<name<<endl;
cout<<"\nthe age of student="<<age;
}
};
int main()
{
student *s;
int i,n;//cin>>n
s=new student[2];
for(i=0;i<2;i++)
{
(*(s+i)).getdata();
// or (s+i)->getdata();
}
for(i=0;i<2;i++)
{
(s+i)->display();

}

return 0;
}