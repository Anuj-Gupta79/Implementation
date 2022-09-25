#include <iostream>
#include <string>
using namespace std;

class Student//student is variable denotes the class.
{
public:
string Name;//student having diff things and generally we named them.
int Number;
int Fees;
void sDet()// member function of class
{
cout <<"The student Name is:"<<Name<<endl<<"student fees:"<<Fees<<endl<<"rollNumber:"<<Number<<endl;
}
};

int main()
{ 
int n;
cout<<"enter the value for n"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
Student obji;
string Name;
int Number;
int Fees;
cout << "Enter student Name, Roll Number, Fees" << endl;
cin >> Name >> Number >> Fees;
obji.Name = Name;
obji.Number = Number;
obji.Fees = Fees;
obji.sDet();
}
}