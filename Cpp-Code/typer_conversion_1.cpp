#include<iostream>
using namespace std;
class dollar
{
public:
int d;
dollar()
{
d=0;
}
void show()
{
cout<<"dollar ="<<d<<"\n";
}
};
class rupees
{
int r;
public:
rupees(int rs)
{
r=rs;
}
operator dollar ()
{
dollar d1;
d1.d=r/80;
return(d1);
}
void show()
{
cout<<"rupees = "<<r<<"\n";
}
int getdata()
{
return r;
}
};
int main()
{
rupees rup(320);
dollar dol;
dol=rup;
rup.show();
dol.show();
return 0;
}