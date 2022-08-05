#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int marks[]={97,98,99,100,101,102,103,104,105,106};
    int arr[10]={0};
    fstream FILE;
    FILE.open("temp",ios::out|ios::binary);
    FILE.write((char *)marks,sizeof(marks));
    FILE.close();
    FILE.open("temp",ios::in|ios::binary);
    FILE.read((char *)arr,sizeof(marks));
    cout<<"\n Marks obtained:";
    for(int i=0;i<10;i++)
    {
         cout<<"\t"<<arr[i];
    }
    FILE.close();
}