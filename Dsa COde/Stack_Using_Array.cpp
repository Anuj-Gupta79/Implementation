#include<bits/stdc++.h>
using namespace std;
#define size 100000

class Stack{
    int top;
    public:
    Stack(){
        top = -1;
    }
    int arr[size];
    int push(int x);
    int pop();
    bool isEmpty();
    bool isFull();
    void display();
    int peek();
    int stack_bottom();
};

bool Stack::isEmpty(){
    if(top == -1) return true;
    return false;
}

bool Stack::isFull(){
    if(top >= size-1) return true;
    return false;
}

int Stack::push(int item){
    if(isFull()){
        cout<<"Stack OverFlow\n";
        return 0;
    }
    arr[++top] = item;
    return arr[top];
}

int Stack::pop(){
    if(isEmpty()){
        cout<<"Stack UnderFlow\n";
        return 0;
    }
    return arr[top--];
}

int Stack::peek(){
    return arr[top];
}

int Stack::stack_bottom(){
    return arr[0];
}

void Stack::display(){
    for(int i=top;i>=0;i--) cout<<arr[i]<<" ";
    cout<<'\n';
}

int main(){
    Stack s;
    cout<<"Pushed Element: "<<s.push(4)<<'\n'; 
    cout<<"Pushed Element: "<<s.push(1)<<'\n';
    cout<<"Pushed Element: "<<s.push(2)<<'\n';
    cout<<"Pushed Element: "<<s.push(3)<<'\n';
    cout<<"Pushed Element: "<<s.push(5)<<'\n';
    cout<<"Stack after push: ";
    s.display();
    cout<<"Poped element: "<<s.pop()<<'\n';
    cout<<"Stack after pop: ";
    s.display();
    cout<<"Peek element: "<<s.peek(); 
    return 0;
}