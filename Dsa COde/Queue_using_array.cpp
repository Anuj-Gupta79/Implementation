#include<bits/stdc++.h>
using namespace std;
#define size 4

class Queue {
    int front;
    int rear;
    public:
    Queue(){
        front = 0; rear = 0;
    }
    int arr[size];
    int enqueue(int data);
    int dequeue();
    bool isEmpty();
    bool isFull();
    void display();
};

bool Queue::isEmpty(){
    if(front == rear) return true;
    return false;
}

bool Queue::isFull(){
    if((rear+1)%size == front) return true;
    return false;
}

int Queue::enqueue(int data){
    if(isFull()){
        cout<<"Queue is OverFlow\n";
        return 0;
    }
    rear = (rear+1)%size;
    arr[rear] = data;
    return arr[rear];
}

int Queue::dequeue(){
    if(isEmpty()){
        cout<<"Queue is UnderFlow\n";
        return 0;
    }
    front = (front+1)%size;
    return arr[front];
}

void Queue::display(){
    for(int i=front+1;i<rear;i++) cout<<arr[i]<<" ";
    cout<<'\n'; 
}

int main(){
    Queue q;
    cout<<"Enqueue Element: "<<q.enqueue(10)<<'\n';
    cout<<"Enqueue Element: "<<q.enqueue(21)<<'\n';
    cout<<"Enqueue Element: "<<q.enqueue(22)<<'\n';
    cout<<"Enqueue Element: "<<q.enqueue(34)<<'\n';
    cout<<"Queue: "; q.display();
    cout<<"Dequeue Element: "<<q.dequeue()<<'\n';
    cout<<"Queue: "; q.display();
    cout<<"Dequeue Element: "<<q.dequeue()<<'\n';
    cout<<"Queue: "; q.display();
    cout<<"Enqueue Element: "<<q.enqueue(40)<<'\n';
    cout<<"Queue: "; q.display();
    return 0;
}