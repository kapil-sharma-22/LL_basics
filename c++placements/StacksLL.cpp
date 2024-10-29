#include<iostream>
using namespace std;

class Node {
     public:
     int data;
     Node* next;

     //constructor
     Node(int d) {
         data = d;
         next = NULL;
     }
};

class Stack {
     Node* top;
     int size; //actual size of the stack

     public:
     Stack() {
         top = NULL;
         size = 0;
     }

     //PUSH operation
     void push(int value) {
         Node* temp = new Node(value);
         temp->next = top;
         top = temp;
         size++;
         cout<<"Pushed "<<value<<" into the stack"<<endl;
     }

    //POP operation
     void pop() {
         if(top == NULL) {
             cout<<"Stack Underflow"<<endl;
             return;
         }
         else {
             Node* temp = top;
             cout<<"Popped "<<top->data<<" from the stack"<<endl;
             top = top->next;
             delete temp;
             size--;
         }
     }

     //Returns the TOP most element 
     int peekElement() {
          
          if(top == NULL) {
            cout<<"Stack is empty"<<endl;
             return -1;
          }
          else {
             return top->data;
          }
     }

     //check whether stack is empty or not 
     bool IsEmpty() {
         return top==NULL;
     }

     //returns the actual size of the stack
     int IsSize() {
         return size;
     }

};

int main(){
    Stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);

    S.pop();

    cout<<S.peekElement();


}

