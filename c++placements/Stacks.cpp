#include<iostream>
using namespace std;

class Stack {
     int *arr;
     int size;
     int top;

     public:
     //constructor
     Stack(int s) {
         arr = new int[s];
         size = s;
         top = -1;
     }

     void push(int value) {
         if(top == size-1) {
             cout<<"Stakc Overflow"<<endl;
             return;
         }
         else {
             top++;
             arr[top] = value;
             cout<<"pushed "<<value<<" into the stack"<<endl;
         } 
      
     }

     void pop() {
         if(top==-1) {
             cout<<"Stack Underflow"<<endl;
             return;
         }
         else {

            cout<<"Popped "<<arr[top]<<" from the stack" <<endl;
             top--;
             
         }
     }

     int peekElement() {
        if(top==-1) {
          cout<<"Stack Underflow"<<endl;
          return -1;
         }
         else {
             return arr[top];
         }

     }

     bool isEmpty() {     
         return top==-1;  // False(0) or True(1)
     }

     int isSize() {   
         return top+1;  
     }


};

int main() {

    Stack S(5);

    S.push(5);
    S.push(8);
    S.push(4);
    S.push(9);
    S.push(3);

    cout<<S.peekElement()<<endl;

    // S.push(10);

    cout<< S.isSize();
 
    if(S.isSize()) {
        cout<<S.peekElement()<<endl;
    }

    // S.pop();
    // S.pop();


     
}