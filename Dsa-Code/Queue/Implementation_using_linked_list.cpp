#include<bits/stdc++.h>
using namespace std;

struct queue_node{
    int data;
    queue_node* next;

    queue_node(int d){
        data = d;
        next = NULL;
    }
};

struct Queue{
    queue_node *rear, *front;
    Queue(){
        rear = NULL;
        front = NULL;
    }

    bool is_empty(){
        if(front == NULL) return true;
        return false;
    }

    int enqueue(int value){
        queue_node* temp = new queue_node(value);
        if(rear == NULL){
            rear = temp;
            front = temp;
            return value;
        }

        rear->next = temp;
        rear = temp;
        return value;
    }

    int dequeue(){
        if(front == NULL) return -1;

        queue_node* temp = front;
        front = front->next;

        if(front == NULL) rear = NULL;
        delete temp;
        return 1;
    }

    int queue_front(){
        if(front == NULL) return -1;
        return front->data;
    }

    int queue_rear(){
        if(rear == NULL) return -1;
        return rear->data;
    }
};

int main(){
    Queue *queue = new Queue();

    cout<<"Inserted Elements: "<<queue->enqueue(2)<<" "<<queue->enqueue(1)<<" "<<queue->enqueue(3)<<endl;

    cout<<"Front: "<<queue->queue_front()<<endl;

    cout<<"Rear: "<<queue->queue_rear()<<endl;

    cout<<"Deleted Elements: "<<queue->dequeue()<<" "<<queue->dequeue()<<endl;

    cout<<"Empty: "<<queue->is_empty()<<endl;
    
    return 0;
}