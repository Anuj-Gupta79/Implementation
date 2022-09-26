#include<bits/stdc++.h>
using namespace std;

class Circular_Queue{
    int *arr;
    int rear;
    int size;
    int front;
    public:

    Circular_Queue(int s){
        size = s;
        front = rear = -1;
        arr = new int[size];
    }

    bool is_empty(){
        if(front == -1) return true;
        return false;
    }

    bool is_full(){
        if((front==0 && rear==size-1) || (rear == (front-1)%(size-1))) return true;
        return false;
    }

    int enqueue(int value){
        if(is_full()) return -1;

        if(rear == -1) rear=front=0;
        else if(front!=0 && rear==size-1) rear=0;
        else rear++;

        arr[rear] = value;
        return arr[rear];
    }

    int dequeue(){
        if(is_empty()) return -1;
        int del = arr[front];
        arr[front] = -1;
        if(front == rear) front=rear=-1;
        else if(front == size-1) front=0;
        else front++;

        return del;
    }

    int circular_queue_front(){
        if(is_empty()) return -1;
        return arr[front];
    }

    int circular_queue_rear(){
        if(is_empty()) return -1;
        return arr[rear];
    }
};

int main(){
    Circular_Queue *queue = new Circular_Queue(4);

    cout<<"Empty: "<<queue->is_empty()<<endl;

    cout<<"Inserted elements: "<<queue->enqueue(1)<<" "<<queue->enqueue(2)<<" "<<queue->enqueue(4)<<" "<<queue->enqueue(3)<<endl;

    cout<<"Front: "<<queue->circular_queue_front()<<" "<<"Rear: "<<queue->circular_queue_rear()<<endl;

    cout<<"Full: "<<queue->is_full()<<endl;

    cout<<"Deleted elements: "<<queue->dequeue()<<endl;

    cout<<"Inserted Element: "<<queue->enqueue(5)<<endl;

    cout<<"Front: "<<queue->circular_queue_front()<<" "<<"Rear: "<<queue->circular_queue_rear()<<endl;

    return 0;
}