#include <iostream>
using namespace std;

int main(){
    

}

class linList{
    
    struct node
        {
            int data;
            node *next;
        };
        
    node *head;

    linList(){
        head=nullptr;
    }

    void addAtBeg(int c){
        node *newnode;
        newnode -> data = c;
        head = newnode;

    }

    void addAtEnd(int c){
        node *endel = head;
        while (endel ->next != nullptr)
        {
            endel = endel ->next;
            
        }
        node *newnode;
        endel ->next = newnode;
        newnode ->next = nullptr;
        newnode ->data = c; 
        
    }

    void addInMid(int x, int pos){
        node *p;
        p = head;
        int c = 1;
        while (p -> next != NULL && pos!= c){
            p = p ->next;
            c++;
        }
        node *newnode;
        newnode ->next = p->next;
        p ->next = newnode;
    }

    void addBefore(int x, int dataa){
        dataa = 21;
        node *p;
        p = head;
        while(p -> next != NULL && p -> next ->data != dataa){
            p = p->next;
   
        }
        node *newnode;
        newnode ->next = p->next;
        p ->next = newnode;

    }

    void deleteAtBeg(){
        head = head -> next;
    }

    void deleteAtEnd(){
        node *temp;
        temp = head;
        while (temp ->next != nullptr)
        {
            temp = temp ->next;
        }
        temp ->next = nullptr;
    }    

    void deleteInMid(int pos){
        node *p;
        p = head;
        int c = 1;
        while (p -> next != NULL && c != pos-1){
            p = p ->next;
            c++;
        }
        p ->next = p ->next ->next;
    }
}

class dbleLinList{
    struct node
    {
        int data;
        node *next;
        node *prev;
    };
    
    node *head;

    dbleLinList(){
        head=nullptr;
        
    }
}
