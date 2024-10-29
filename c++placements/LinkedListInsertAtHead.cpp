#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

//Inserting data at the head node
void InsertAtHead(Node* &head,int d) {
     
     Node* newNode = new Node();
     
     newNode->data = d;

     newNode->next = head;

     head = newNode;
}

//Function to Traverse through the linked list 
void print(Node* head) {
     Node* temp = head;

     while(temp!=NULL) {
         cout<<temp->data<<" " ;
         temp = temp->next;
     }
     cout<<endl;
}

int main() {

    Node* head = NULL;  //initialize the head node to 'NULL' initially 

    InsertAtHead(head,30);
    InsertAtHead(head,20);
    InsertAtHead(head,10);

    print(head);

}