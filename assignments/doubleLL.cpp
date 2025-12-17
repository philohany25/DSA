#include <iostream>
using namespace std;


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

    void deletenode(int key){
        node *temp = head;
        while (temp != nullptr && temp -> data != key)
        {
            temp = temp -> next;
        }
        if (temp == nullptr)
        {
            cout<<"Key not found"<<endl;
        }
         
        delete temp;
    }
}
