#include<iostream>
using namespace std;
class Question_1
{
    int *ID,n;
    public:
    Question_1()
    {
        cout<<"Enter the size of the array: ";
        cin>>n;
        ID = new int[n];
        if(!*ID)
        {
            cout<<"Memory allocation is fail."<<endl;
            exit (1);
        }
        else
        {
            cout<<"Memory allocated successfully."<<endl;
        }
        for(int i=0;i<n;++i)
        {
            cout<<"Enter the value for ID["<<i<<"]: ";
            cin>>ID[i];
        }
    }
    void maximum()
    {
        int max;
        max=ID[0];
        for(int i=0;i<n;++i)
        {
            if(max<ID[i])
            {
                max=ID[i];
            }
        }
        cout<<"Maximum element of the array is "<<max<<endl;
    }
    void minimum()
    {
        int min;
        min=ID[0];
        for(int i=0;i<n;++i)
        {
            if(min>ID[i])
            {
                min=ID[i];
            }
        }
        cout<<"Minimum element of the array is "<<min<<endl;
    }
    ~Question_1()
    {
        delete []ID;
        cout<<"Memory dellocated successfully."<<endl;
    }
};
int main()
{
    Question_1 o1;
    o1.maximum();
    o1.minimum();
    return 0;
}