#include <iostream>
using namespace std;

// queue, stack implemntation


class stackL() {
    struct node
    {
        int data;
        node *next;
    };
    node *top;
    

    stack() {
        top = -1;
    }


    int push(int x){
        if (top == nullptr){
            node *newnode;
            newnode -> data = x;
            newnode -> next = nullptr;
            top = newnode;
        }
        else{
            node *newnode;
            newnode -> data = x;
            newnode -> next = top;
            top = newnode;
        }
    }


    int pop() {
        if (top == nullptr) {
            return -1;
        }
        else {
            node *temp = top;
            int poppedValue = top -> data;
            top = top -> next;
            delete temp;
            return poppedValue;
        }
    }


    int peek() {
        if (top == nullptr) {
            return -1;
        }
        else {
            return top -> data;
        }
}
}

int main() {   
    stackL s1;
    
    s1.push(5);
}