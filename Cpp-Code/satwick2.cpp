#include<iostream>
using namespace std;
class matrix
{
    int a[10][10],add[10][10],sub[10][10],mult[10][10];
    int i,j,n,m;
    public:
    void values()
    {
        cout<<"Enter the number of row: ";
        cin>>m;
        cout<<"Enter the number column: ";
        cin>>n;
        cout<<"Enter the elements of matrix:"<<endl;
        for(i=0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        cout<<"\nMatrix is: "<<endl;
        for(i=0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }

    }
    void operator +(matrix x)
    {
        for(i=0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                add[i][j]=a[i][j]+x.a[i][j];
                cout<<add[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    void operator -(matrix x)
    {
        for(i=0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                sub[i][j]=a[i][j]-x.a[i][j];
                cout<<sub[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    void operator *(matrix x)
    {
        for(i=0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                mult[i][j]=a[i][j]*x.a[i][j];
                cout<<mult[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix o1,o2;
    o1.values();
    o2.values();
    o1.display();
    o2.display();
    cout<<"Addition of two matrix: "<<endl;
    o1+o2;
    cout<<"Subtraction of two matrix: "<<endl;
    o1-o2;
    cout<<"Multiplication of two matrix: "<<endl;
    o1*o2;
    return 0;
}