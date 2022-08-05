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

struct node* delete_first(){
    node* n = Head;
    Head=Head->next;
    free(n);
    return Head;
}

struct node* delete_BW(node* Head,int index){
    node* p = Head;
    node* n = Head->next;
    int i=0;
    while(i!=index-1){
        p=p->next; n=n->next;
        i++;
    }
    p->next=n->next;
    free(n);
    return Head;
}

struct node* delete_last(){
    node* p = Head;
    node* n = Head->next;
    while(n->next!=NULL){
        p=p->next; n=n->next;
    }
    p->next=NULL;
    free(n);
    return Head;
}

struct node* delete_Aftervalue(int ele){
    node* p = Head;
    node* n = Head->next;
    while(n->data!=ele && n->next!=NULL ){
        p=p->next; n=n->next;
    }
    if(n->data==ele){
        p->next=n->next;
        free(n);
    }
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
    Head=delete_first();
    cout<<'\n';
    print(Head);
    Head=delete_BW(Head,1);
    cout<<'\n';
    print(Head);
    Head=delete_last();
    cout<<'\n';
    print(Head);
    Head=delete_Aftervalue(4);
    cout<<'\n';
    print(Head);
    return 0;
}