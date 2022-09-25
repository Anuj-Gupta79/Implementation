#include<bits/stdc++.h>
using namespace std;
#define size 100000

int capacity = 0;

struct node{
    int data;
    struct node* next;
};

node* top = NULL;

bool isEmpty(){
    if(top == NULL) return true;
    return false;
}

bool isFull(){
    if(size == capacity) return true;
    return false;
}

void push(int element){
    if(isFull()){
        cout<<"Stack OverFlow\n";
    }
    node* n = new node();
    n->next = top;
    n->data = element;
    top = n;
}

void pop(){
    if(isEmpty()){
        cout<<"Stack UnderFlow\n";
    }
    node* n = top;
    top = top->next;
    free(n);
}

int peek(){
    return top->data;
}

int Stack_Bottom(){
    node* n = top;
    while(n->next!=NULL) n=n->next;
    return n->data;
}

void display(){
    node* n = top;
    do{
        cout<<n->data<<" ";
        n = n->next;
    }while(n!=NULL);
    cout<<'\n';
}

int main(){
    push(1); push(2); push(3); push(4); push(5); push(6);
    cout<<"Stack after pushing: ";
    display();
    cout<<"Peak element: "<<peek();
    pop();
    cout<<"Stack after poping: ";
    display();
    return 0;
}