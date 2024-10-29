#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

void InsertAtHead(Node* &head, int d) {
     
     Node* newNode = new Node();

     newNode->data = d;

     newNode->next = head;

     head = newNode;

}


// Function to insert a node with data 'd' at a specific position in the list
void insertInBetween(Node*&head,int d,int position) {

    if(position==1) {
         Node* newNode = new Node();
         newNode->data = d;
         newNode->next = head; //setting the newNode's next to the head node
         head = newNode; //update the head to the newNode
         return;
    }

    Node* temp = head;

    int count = 1;
     // Move temp to the node just before the desired position
    while(count<position-1 && temp->next!=NULL) {
         temp = temp->next;
         count++;
    }
  //If temp->next == NULL, it means position is one past the last node 
    if(count==position-1 && temp->next == NULL) {
         Node* newNode = new Node();
         newNode->data = d;
         temp->next = newNode; //Link the last node to newNode

         newNode->next = NULL; //newNode will be the last node

         return;
    }

    Node* insertNode = new Node();
    insertNode->data = d;


//We set the next pointer of the new node to point to the node that comes after temp.
    insertNode->next = temp->next;


//We set the next pointer of temp to point to the new node, 
//effectively inserting the new node into the list.
    temp->next = insertNode;
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
     Node* head = NULL;
     
     InsertAtHead(head,40); 
     InsertAtHead(head,30);
     InsertAtHead(head,20);
     InsertAtHead(head,10);

     print(head);

     insertInBetween(head,55,3);

     print(head);

     insertInBetween(head,5,1);

     print(head);


}