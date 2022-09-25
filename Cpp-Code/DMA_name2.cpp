#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    char *a = new char[size];
    cin>>a;
    cout<<a;
    return 0;
}