#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int pos;
    fstream outfile;
    outfile.open("name.txt",ios::out);
    outfile<<"Shilpa sharma";
    cout<<"\n The current position of write pointer is:";
    cout<<outfile.tellp();
    cout<<"\n Enter the position to move:";
    cin>>pos;
    outfile.seekg(pos,ios::beg);
    cout<<"\n The position of Get pointer is:";
    cout<<outfile.tellg();
    cout<<"\n Enter the position to move from current position:";
    cin>>pos;
    outfile.seekg(pos,ios::cur);
    cout<<"\n The position of Get pointer is:";
    cout<<outfile.tellg();
    cout<<"\n Enter the position to move from end:";
    cin>>pos;
    outfile.seekg(-pos,ios::end);
    cout<<"\n The position of Get pointer is:";
    cout<<outfile.tellg()<<endl;
    cout<<outfile.tellp();
    return 0;
}