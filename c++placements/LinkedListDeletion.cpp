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


void DeletionofNode(Node*&head, int position) {

    if(position==1){  //if key value (head->data == key) same code as given below in the-->if condition
        Node* temp = head;
        head = head->next; //move the head to the next node -->now 2nd node is head node 

        temp->next = NULL;
        delete temp;
        return;
    }

    Node* prev = NULL;
    Node* current = head;

    int count = 1; //to keep the track of previous and current node
    while(count<position) {
         prev = current;    
         current = current->next;
         count++;
    }

    prev->next = current->next;  //point the previous node to the currrent node next 

    current->next = NULL; //point the current node to NULL, now it is ready to delete

    delete current;
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
    
    InsertAtHead(head,50);
    InsertAtHead(head,40); 
    InsertAtHead(head,30);
    InsertAtHead(head,20);
    InsertAtHead(head,10);

    print(head);

    DeletionofNode(head,1);
    print(head);

    DeletionofNode(head,3);
    print(head);

}