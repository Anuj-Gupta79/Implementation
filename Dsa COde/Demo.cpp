#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
}; node *head, *temp;


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
node *add(node *head, node *head1){
    stack<int> s,s1;
    node *head2 = 0;
    int carry=0;
    while(head){
        s.push(head->data);
        head = head->next;

    }
    while(head1){
        s1.push(head1->data);
        head1 = head1->next;
    }
    
    while(!s1.empty() && !s.empty()){
        int k = carry+s.top()+s1.top();//5
        node *newnode=new node();
        newnode->data=k%10;
        newnode->next=head2;
        head2 = newnode;
        carry = k/10;
        s.pop(); s1.pop();
    }
    while(!s1.empty()){
        if(carry!=0){
        node *newnode=new node();
        newnode->data=s1.top()+carry;
        newnode->next=head2;
        head2 = newnode;
        carry = 0;
        }
        node *newnode=new node();
        newnode->data=s1.top();
        newnode->next=head2;
        head2 = newnode;
        s1.pop();
    }
    while(!s.empty()){
        if(carry!=0){
        node *newnode=new node();
        newnode->data=s.top()+carry;
        newnode->next=head2;
        head2 = newnode;
        carry = 0;
        }
        node *newnode=new node();
        newnode->data=s.top();
        newnode->next=head2;
        head2 = newnode;
        s.pop();
    }
    if(carry!=0){
        node *newnode=new node();
        newnode->data = carry;
        newnode->next = head2;
        head2 = newnode;
    }
    return head2;
}

void display(node *head){
    temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    node *head, *head1, *head2;
    head=createlist();//563
    head1=createlist();// 842
    head2=add(head, head1);
    display(head2);
}