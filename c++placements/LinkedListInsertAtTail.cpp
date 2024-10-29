#include<iostream>
using namespace std;

class Node {
     public:
     int data;
     Node* next;

     Node(int data) {
         this->data = data;
         this->next = NULL;
     }
};

void InsertAtTail(Node*&tail, int d) {
     
     Node* newNode = new Node(d);  //creating a new node with data -->20

     tail->next = newNode;  //linking the tail-next to newNode

    //  tail = tail->next; 
      tail = newNode;    //now tail is newNode
      
}

void print(Node* head) {
     
     Node* temp = head;

     while(temp!=NULL) {
         cout<<temp->data<<" " ;
         temp = temp->next;
     }
     cout<<endl;
}


int main() {
     
     Node* head = new Node(10);

     Node* tail = head;

     InsertAtTail(tail,20);
     InsertAtTail(tail,30);
     
     print(head);
}