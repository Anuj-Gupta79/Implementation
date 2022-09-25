#include <iostream>
using namespace std;
template<class T>
void swap(T &x, T &y)
{
	T temp= x;
	x=y;
	y= temp;
}
void fun(int m, int n,float a, float b)
{
	cout<<"m and n before swap:"<<m<<""<<n;
	swap(m,n);
	cout<<" m and n after swap:"<<m<<""<<n;
   cout<<"a  and b before swap:"<<a<<""<<b;
	swap(a,b);
	cout<<" a and b after swap:"<<a<<""<<b;
}
int main()
{
	fun(10,30,23.32,45.32);
	return 0;
}