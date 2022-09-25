#include<bits/stdc++.h>
using namespace std;

class Queue{
    int arr[100001];
    int size; 
    int rear;
    int front;
    public:
    Queue(int s){
        size = s;
        rear = 0;
        front = 0;
    }

    bool is_empty(){
        if(rear == front) return true;
        return false;
    }

    bool is_full(){
        if(rear == size) return true;
        return false;
    }

    int enqueue(int value){
        if(rear == size) return -1;
        else{
            arr[rear++] = value;
            return value;
        }
    }

    int dequeue(){
        if(rear == front) return -1;
        else{
            int del = arr[front];
            arr[front++] = -1;
            if(rear == front) rear = 0,front = 0;
            return del;
        }
    }

    int queue_front(){
        if(rear == front) return -1;
        return arr[front];
    }

    int queue_rear(){
        if(rear == front) return -1;
        return arr[rear-1];
    }
};

int main(){
    int n = 5;
    Queue *queue = new Queue(5);

    cout<<"Inserting elements: "<<queue->enqueue(1)<<" "<<queue->enqueue(2)<<" "<<queue->enqueue(3)<<" "<<queue->enqueue(5)<<" "<<queue->enqueue(4)<<" "<<endl; 

    cout<<"Front: "<<queue->queue_front()<<endl;

    cout<<"Rear: "<<queue->queue_rear()<<endl;

    cout<<"Full: "<<queue->is_full()<<endl;

    cout<<"Deleting ELements: "<<queue->dequeue()<<" "<<queue->dequeue()<<endl;
    queue->dequeue();
    queue->dequeue();

    cout<<"Front: "<<queue->queue_front()<<endl;

    cout<<"Rear: "<<queue->queue_rear()<<endl;

    cout<<"Empty: "<<queue->is_empty()<<endl;
    
    return 0;
}