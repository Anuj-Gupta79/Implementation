#include<iostream>
using namespace std;

class Prime
{
    private:
        int lower_limit;
       int upper_limit;

    public:
        Prime(int x, int y)
        {
            int count=0;
            int flag;
            lower_limit=x;
            upper_limit=y;
            for (int i = lower_limit ;i < upper_limit-1; i++)
            {
                flag=1;
                for(int j=2; j<i ; j++)
                {
                    if(i%j==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    ++count;
                }
            }
         cout<<"total count of prime no. between both limits are "<<count;
        }

};
int main()
{
    Prime p1(10,15);
    return 0;
}