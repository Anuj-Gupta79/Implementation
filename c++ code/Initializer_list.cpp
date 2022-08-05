#include<iostream>
using namespace std;
class Base
{
    private:
    int &r;
    public:
    Base(int &ref):r(ref)
    {
        cout << "Value is " << r;
    }
};
int main()
{
    int ref=10;
    Base il(ref);
    return 0;
}