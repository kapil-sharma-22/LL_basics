#include<iostream>
using namespace std;

class Node {
     public:
     int data;
     Node* prev;
     Node* next;

     //constructor --> to initialize the values to the newly created node 
    //  Node(int data) {
    //      this->data = data;
    //      this->prev = NULL;
    //      this->next = NULL;
    //  }
}; 

void InsertAtHead(Node*&head, int d) {
     
     Node* newNode = new Node();

     newNode->data = d;

     newNode->next = head;
     newNode->prev = NULL; //newNode will be the first node so it's prev will be NULL

     if(head!=NULL)  head->prev = newNode;

     head = newNode; //update the head to point to the new node
}

void print(Node* &head) {
     
     Node* current = head;

     while(current!=NULL) {
        cout<<current->data<<" ";
        current = current->next;
     }
     cout<<endl;
}

int main() {
     
     Node* head = NULL;

     InsertAtHead(head,10);
     InsertAtHead(head,20);
     InsertAtHead(head,30);
     InsertAtHead(head,40);
     InsertAtHead(head,50);

     print(head);
}