#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

node* Head = new node();

void print(node* Head){
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head=Head->next;
    }
}

struct node* insert_first(node* Head,int data){
    node* n = new node();
    n->next=Head;
    n->data=data;
    return n;
}

struct node* insert_BW(node* Head,int data,int index){
    node* n = new node();
    node* p = Head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    n->data=data;
    n->next=p->next;
    p->next=n;
    return Head;
}

struct node* insert_last(int data){
    node* n = new node();
    node* p = Head;
    while(p->next!=NULL) p=p->next;
    n->data = data;
    p->next = n;
    n->next = NULL;
    return Head;
}

struct node* insert_Afternode(int data, int ele){
    node* n = new node();
    node* p = Head;
    while(p->data!=ele) p=p->next;
    n->data=data;
    n->next=p->next;
    p->next=n;
    return Head;
}

int main(){
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
    n5->next = NULL;
    print(Head);
    Head=insert_first(Head,21);
    cout<<'\n';
    print(Head);
    Head=insert_BW(Head,24,3);
    cout<<'\n';
    Head=insert_last(23);
    print(Head);
    cout<<'\n';
    Head=insert_Afternode(25,5);
    print(Head);
    return 0;
}