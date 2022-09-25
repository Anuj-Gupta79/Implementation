#include<iostream>
using namespace std;
void test(int n)
{
    try
    {
        if(n==0)
        {
            throw n;
        }
        else if(n==1)
        {
            throw 'n';
        }
        else if(n==-1)
        {
            throw 1.0;
        }
        cout<<"End of try block."<<endl;
    }
    catch(char i)
    {
        cout<<"caught a character."<<endl;
    }
    catch(int i)
    {
        cout<<"caught a integer."<<endl;
    }
    catch(double i)
    {
        cout<<"caught a double."<<endl;
    }
}
int main()
{
    int n,x;
    cout<<"Enter the number you want to execute this code: ";
    cin>>x;
    for(int i=0;i<x;++i)
    {
        cout<<"Enter the value of n: ";
        cin>>n;
        cout<<"Testing multiple cases."<<endl;
        test(n);
        cout<<"n=="<<n<<endl;
    }
    return 0;
}