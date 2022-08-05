#include<iostream>
using namespace std;
class item
{
    static int count;
    int number;
    public:
    int getdata(int d)
    {
        number = d;
    	count++;
	}
    void getcount()
    {
        cout<<count;
    }
}; 
int item :: count;
int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);  
    cout<<"after reading”;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}