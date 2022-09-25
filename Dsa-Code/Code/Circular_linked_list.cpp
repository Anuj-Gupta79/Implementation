#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void print(node* Head){
    node* ptr = Head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=Head);
}

struct node* insertAtFirst(node* Head,int data){
    node* n = new node();
    node* ptr = Head->next;
    n->data=data;
    while(ptr->next!=Head) ptr=ptr->next;
    ptr->next=n;
    n->next=Head;
    Head=n;
    return Head;
}

int main(){
    node* Head = new node();
    node* n1 = new node();
    node* n2 = new node();
    node* n3 = new node();
    node* n4 = new node();
    node* n5 = new node();
    Head->data = 1;
    Head->next = n1;
    n1->data = 2;
    n1->next = n2;
    n2->data = 3;
    n2->next = n3;
    n3->data = 4;
    n3->next = n4;
    n4->data = 5;
    n4->next = n5;
    n5->data = 6;
    n5->next = Head;
    print(Head);
    insertAtFirst(Head,20);
    cout<<'\n';
    print(Head);
    return 0;
}