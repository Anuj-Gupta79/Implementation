#include <iostream>
#include <list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    list <int> v ;
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(12);
    v.push_front(4);
    list<int>::iterator i=find(v.begin(),v.end(),9);
    v.insert(i,56);
    i++;
    v.erase(i);
    list<int>::iterator i1=v.begin();
    list<int>::iterator i2=v.end();
    for(list<int>::iterator it=i1;it!=i2;++it)
    {
        cout<<*it<<" ";
    }
    return 0;
}

