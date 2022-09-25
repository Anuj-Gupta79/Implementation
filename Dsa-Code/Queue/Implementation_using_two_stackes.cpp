#include<bits/stdc++.h>
using namespace std;

struct Queue_by_dequeue_cost{
    stack<int> stack1,stack2;

    int enqueue(int value){
        stack1.push(value);
        return stack1.top();
    }

    int dequeue(){
        if(stack1.empty() && stack2.empty()) return -1;
        while(!stack1.empty()){
            stack2.push(stack1.top());
            stack1.pop();
        }
        int del = stack2.top();
        stack2.pop();
        return del;
    }
};

struct Queue_by_enqueue_cost{
    stack<int> stack1,stack2;

    int enqueue(int value){
        while(!stack1.empty()){
            stack2.push(stack1.top());
            stack1.pop();
        }

        stack2.push(value);

        while(!stack2.empty()){
            stack1.push(stack2.top());
            stack2.pop();
        }
        return value;
    }

    int dequeue(){
        if(stack1.empty()) return -1;
        int del = stack1.top();
        stack1.pop();
        return del;
    }
};

int main(){

    cout<<"Implementation using dequeue costly method:-"<<endl;
    Queue_by_dequeue_cost *q1 = new Queue_by_dequeue_cost();
    cout<<"Inserted Elements: "<<q1->enqueue(1)<<" "<<q1->enqueue(2)<<" "<<q1->enqueue(3)<<endl;
    cout<<"Deleted element: "<<q1->dequeue()<<" "<<q1->dequeue()<<endl;

    cout<<"Implementation using enqueue costly method:-"<<endl;
    Queue_by_enqueue_cost *q2 = new Queue_by_enqueue_cost();
    cout<<"Inserted Elements: "<<q2->enqueue(1)<<" "<<q2->enqueue(2)<<" "<<q2->enqueue(3)<<endl;
    cout<<"Deleted element: "<<q2->dequeue()<<" "<<q2->dequeue()<<endl;

    return 0;
}