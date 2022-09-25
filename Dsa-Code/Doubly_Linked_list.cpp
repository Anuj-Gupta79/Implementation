#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

void T_Forward(struct node* Head){
    node* ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

void T_Backward(struct node* Head){
    node* ptr = Head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    while(ptr!=Head){
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
    }
    cout<<ptr->data<<" ";
}

int main(){
    node* Head = new node();
    node* n1 = new node();
    node* n2 = new node();
    node* n3 = new node();
    node* n4 = new node();
    Head->data = 1;
    Head->next = n1;
    Head->prev = NULL;
    n1->data = 2;
    n1->next = n2;
    n1->prev = Head;
    n2->data = 3;
    n2->next = n3;
    n2->prev = n1;
    n3->data = 4;
    n3->next = n4;
    n3->prev = n2;
    n4->data = 5;
    n4->next = NULL;
    n4->prev = n3;
    T_Forward(Head);
    cout<<'\n';
    T_Backward(Head);
    return 0;
}