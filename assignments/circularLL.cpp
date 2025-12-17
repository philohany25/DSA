#include <iostream>
using namespace std;

class circularLinList{
    struct node
    {
        int data;
        node *next;
    };
    
    node *head;

    circularLinList(){
        head=nullptr;
        
    }
    void addAtBeg(int c){
        node *newnode;
        newnode ->data = c;
        head = newnode;
        newnode ->next = head;
    }

    void addAtEnd(int c){
        node *endel = head;
        while (endel ->next != head)
        {
            endel = endel ->next;
            
        }
        node *newnode;
        endel ->next = newnode;
        newnode ->next = head;
        newnode ->data = c; 
        
    }
    
};