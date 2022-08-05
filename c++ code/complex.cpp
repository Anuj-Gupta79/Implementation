#include<iostream>
using namespace std;
class Complex 
{
    int real, imag;
    public:
    void in()
    {
        cout<<"enter the value of real part: ";
        cin>>real;
        cout<<"enter the value of imagionary part: ";
        cin>>imag;
    }
    Complex(int r = 0, int i =0)
    {
        real = r;
        imag = i;
    }
    Complex operator + (Complex const &a1)
    {
        Complex sum;
        sum.real = real + a1.real;
        sum.imag = imag + a1.imag; 
        return sum;
    }
    Complex operator - (Complex const &a1)
    {
        Complex res;
        res.real = real - a1.real;
        res.imag = imag - a1.imag; 
        return res;
    }
    void print1()  
    { 
        cout <<real<<" + "<<imag<<"i"<< endl;
    }
    void print2()  
    { 
        cout <<real<<" - "<<imag<<"i"<< endl;
    }
};

int main()
{
Complex c1, c2;
c1.in();
c2.in();
Complex c3 = c1 + c2;
Complex c4 = c1 - c2;
c3.print1();
c4.print2();
return 0;
}