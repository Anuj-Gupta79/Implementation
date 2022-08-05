#include<iostream>
using namespace std;
class student
{
    private:
    char name[10];
    int roll,marks;
    public:
    void get()
    {
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the Roll number of the student: ";
        cin>>roll;
        cout<<"Enter the marks of the student: ";
        cin>>marks;
       
    }
    void display()
    {
         cout<<name<<"  "<<roll<<"  "<<marks<<endl;
    }
    bool operator >(const student &A)
    {
        if(marks>A.marks)
        {
            return true;
        }
        else
        {
           return false;
        }
    }
};
int main()
{
    student *p = new student[4];
    student *r = p;
    if(!p)
    {
        cout<<"Memory allocation is fail."<<endl;
        exit (1);
    }
    else 
    {
        cout<<"Memory allocated successfully."<<endl;
    }
    for(int i=0;i<4;++i)
    {
        p->get();
        ++p;
    }
    if((r[0]>r[1])&&(r[0]>r[2])&&(r[1]>r[3]))
    {
        cout<<"Student Data who gat highest marks: ";
        r[0].display();
    }
    else
    {
        if((r[1]>r[0])&&(r[1]>r[2])&&(r[1]>r[3]))
        {
            cout<<"Student Data who gat highest marks: ";
            r[1].display();
        }
        else
        {
            if((r[2]>r[0])&&(r[2]>r[1])&&(r[2]>r[3]))
            {
                cout<<"Student Data who gat highest marks: ";
                r[2].display();
            }
            else
            {
                cout<<"Student Data who gat highest marks: ";
                r[3].display();
            }
        }
    }
    delete []p;
    cout<<"Memory dellocated successfully.";
    return 0;
}