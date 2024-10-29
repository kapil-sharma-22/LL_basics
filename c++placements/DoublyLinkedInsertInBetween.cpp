#include<iostream>
using namespace std;

class Node { 
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
         this->data = data;
         this->prev = NULL;
         this->next = NULL;
    }
};

void InsertAtHead(Node*&head,Node*&tail, int d) {
    
    Node* newNode = new Node(d);

    if(head==NULL) {
         head = newNode;
         tail = newNode;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void InsertAtTail(Node*&head,Node*&tail, int d) {

    
    Node* newNode = new Node(d);
    //newNode->data = d;

    if(tail==NULL) {
        //if the list is empty, both head and tail should point to the same node 
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode; //point the tail next to newly created node 
    newNode->prev = tail;  //new node previous point to tail 

    tail = newNode; //update the tail to newNode
}

void InsertInBetween(Node*&head, Node*&tail,int d,int position) {

    if(position==1) {
         InsertAtHead(head,tail,d);
         return;
    }
     
    Node* newNode = new Node(d);
    Node* current = head;

    int count = 1;
    while(count<position) {
         current = current->next;
         count++;
    }

    if(current==NULL) {
         InsertAtTail(head,tail,d);
         return;
    }

    newNode->next = current->next;
    current->next->prev = newNode;

    current->next = newNode;
    newNode->prev = current;

}

void Deletion(Node*&head, Node*&tail, int position) {

    if(position==1) {
         Node* temp = head;
         head=head->next;
         head->prev = NULL;

         delete temp;
         return;
    }

    Node* temp = head;

    int count = 1;
    while(count<position) {
         temp = temp->next;
         count++;
    }

    if(temp->next==NULL) {
         tail = temp->prev;
         tail->next = NULL;
         
         delete temp;
         return;
    }

    //deleting in between any node 

    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;

    delete temp;

}

void print(Node*&head) {
     Node* current = head;

     while(current!=NULL) {
        cout<<current->data<<" " ;
        current = current->next;
     }
     cout<<endl;
}

int main() {

    Node* head = new Node(10);

    Node*tail = head;

    InsertAtHead(head,tail,20);
    InsertAtHead(head,tail,30);
    InsertAtHead(head,tail,40);
    InsertAtHead(head,tail,50);

    print(head);

    InsertInBetween(head,tail,35,2);

    print(head);

    InsertAtTail(head,tail,100);

    print(head);


    Deletion(head,tail,3);

    print(head);


     
}