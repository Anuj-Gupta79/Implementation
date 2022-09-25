#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class Data
{
    int i;
    char name2[20],num[20],num1[20],num2[20];
    string name[100]={"Aman","Raj","Rajesh","Ankita","Isha","Rohit","Roopali","Priyanshu","priyanka","Ashu"};
    string number[100]{"243583","372037","483823","327879","617265","163745","127897","218123","327483","328383"};
    public:
    void get_data()
    {
        ofstream f1;
        f1.open("Data1.txt");
        for(i=0;i<10;++i)
        {
            f1<<name[i]<<"     "<<number[i]<<endl;
        }

    }
    void show_data()
    {   
        ifstream f2;
        f2.open("Data1.txt");
        for(i=0;i<10;++i)
        {
            f2>>name[i];
            f2>>number[i];
            cout<<" "<<name[i]<<"     "<<number[i]<<endl;
        }
        f2.close();
    }
    void name_check()
    {
        ofstream f3;
        f3.open("Data.txt");
        cout<<"Enter the name for whom you want number: ";
        cin>>name2;
        for(i=0;i<10;++i)
        {
            if(name2==name[i])
            {
                cout<<"Telephone number of "<<name2<<" is "<<number[i]<<endl;
            }
            else
            {
                continue;
            }
        }
        f3.close();
    }
    void number_check()
    {
        ofstream f4;
        f4.open("Data1.txt");
        cout<<"Enter the name for whom you want number: ";
        cin>>num;
        for(i=0;i<10;++i)
        {
            if(num==number[i])
            {
                cout<<"Telephone number of "<<num<<" is "<<name[i]<<endl;
            }
            else
            {
                continue;
            }
        }
        f4.close();
    }
    void update()
    {
        ofstream f5;
        f5.open("Data1.txt");
        cout<<"Enter the number which you want to update: ";
        cin>>num1;
        cout<<"Enter the number from which you want to update ";
        cin>>num2;
        for(i=0;i<10;++i)
        {
            if(num1==number[i])
            {
                number[i]=num2;
            }
            else
            {
                continue;
            }
        }
    }    
};
int main()
{
    Data o1;
    o1.get_data();
    o1.show_data();
    o1.name_check();
    o1.number_check();
    o1.update();
    o1.show_data();
    return 0;
}