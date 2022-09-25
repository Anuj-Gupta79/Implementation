#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char s1[20];
    ofstream fileo("File1.txt");
    cout<<"enter any string";
    cin.getline(s1,20);
    for(int i=0;i<strlen(s1);i++)
    {
        fileo.put(s1[i]);
    }
    fileo.close();
    ifstream fin("File1.txt");
    char ch;
    while(fin)
    {
        fin.get(ch);
        cout<<ch;
    }
    fin.close();
    return 0;
}