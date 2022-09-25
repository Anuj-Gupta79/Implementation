#include<bits/stdc++.h>
#include<string>
using namespace std;

class node{
public:
int data;
node *next;
}; node *head, *temp;

class node1{
public:
int data1;
node1 *next1;
node1(int d){
this->data1=d;
}
};

node *createlist(){
head=0;
node *newnode;
int n;
cout<<"Take the size of list"<<endl;//5
cin>>n;
while(n--){
newnode=new node();
cin>>newnode->data;
newnode->next=0;
if(head==0)
head=temp=newnode;
else{
temp->next=newnode;
temp=temp->next;
}
}
return head;
}
void add(node *head, node *head1){
string s, s1;
temp=head;
while(temp){
s+=temp->data;
temp=temp->next;
}
temp=head1;
while(temp){
s1+=temp->data;
temp=temp->next;
}
int i;
i= stoi(s)+ stoi(s1);
string s2= to_string(i);//1405
//cout<<s2;
node1 *head2, *temp1;
head2=0;
for(int i=0; i<s2.length(); i++){
node1 *newnode1=new node1(s[i]);
if(head2==0)
head2=temp1=newnode1;
else{
temp1->next1=newnode1;
temp1=temp1->next1;
}
}
}
void display(){
temp=head;
while(temp){
cout<<temp->data;
temp=temp->next;
}
}
int main(){
node *head, *head1;
head=createlist();//563
head1=createlist();// 842
add(head, head1);
display();
}