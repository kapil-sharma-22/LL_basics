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

// void InsertAtHead(Node*&head, int d) {
     
//      Node* newNode = new Node();

//      newNode->data = d;

//      newNode->next = head;
//      newNode->prev = NULL; //newNode will be the first node so it's prev will be NULL

//      if(head!=NULL)  head->prev = newNode;

//      head = newNode; //update the head to point to the new node
// }

void InsertAtTail(Node*&head,Node*&tail, int d) {

    
    Node* newNode = new Node();
    newNode->data = d;

    if(tail==NULL) {
        //if the list is empty, both head and tail should point to the same node 
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode; //point the tail next to newly created node 
    newNode->prev = tail;  //new node previous point to tail 

    tail = newNode; //update the tail to newNode
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

     Node* tail = NULL;

     InsertAtTail(head,tail,10);
     InsertAtTail(head,tail,20);
     InsertAtTail(head,tail,30);
     InsertAtTail(head,tail,40);
     InsertAtTail(head,tail,50);

     print(head);
}