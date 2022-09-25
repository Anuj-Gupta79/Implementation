#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    char name[10];
    float sal;
    ofstream outFile;
    outFile.open("Employee1.txt");
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the name of Employee"<<i+1<<" : ";
        cin>>name;
        cout<<"Enter the salary of Employee"<<i+1<<" : ";
        cin>>sal;
        outFile<<"\n"<<name<<"\t"<<sal;
    }
    outFile.close();
    ifstream inpFile;
    inpFile.open("Employee1.txt");
    for(int i=0;i<3;i++)
    {
        inpFile>>name;
        inpFile>>sal;
        cout<<"\n Employee "<<i+1<<" : ";
        cout<<name<<"\t"<<sal;
    }
    inpFile.close();
}