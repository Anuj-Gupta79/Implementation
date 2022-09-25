#include<iostream>
using namespace std;
class hours
{
    public:
    int h;
    hours()
    {
        h =0;
    }
    void show()
    {
        cout<<"Hours = "<<h<<"\n";
    }
/* hours(minutes mm)
{
h=mm.getdata()/60;
}*/
};
class minutes
{
int m;
public:
minutes(int ms)
{
m = ms;
}
operator hours()
{
hours h1;
h1.h = m/60;
return(h1);
}
void show()
{
cout<<"Minutes = "<<m<<"\n";
}
int getdata()
{
return m;
}
};
int main()
{
minutes min(240);
hours hr;
hr = min; //class minutes to class hours
min.show();
hr.show();
return 0;
}