#include <iostream>
using namespace std;

class queue{
    struct node
    {
        int data;
        node *next;
    };
    
    node *front;
    node *rear;
    
    queue(){
        rear = nullptr;
        front = nullptr;
    }
    bool isEmpty(){
        if (rear == nullptr && front == nullptr )
        {
            return true;
        }
        else{
            return false;
        }
        
    }

    bool notEmpty(){
        if (front != nullptr){
            return true;
        }
        else{
            return false;
        }
    }

    int rtrnFront(){
        return front;
    }
    int rtrnRear(){
        return rear;
    }

    void dequeue(){
        if (isFull())
        {
            rear++;
            front = 0;
        }
        else if(notEmpty()){
            rear++;
        }
        else{
            cout<< "array is empty, cant dequeue";
        }
    }

    void dequeuee

    void enqueue(int num){
        if (isEmpty)
        {
            front++;
            arr[front -1] = num;
            rear++;
        }
        else if (notEmpty){
            front++;
            arr[front -1] = num;
        }
        
        else{
            cout<< "array is full";
        }
    }
}

