#include<iostream>
using namespace std;

int main() {
    //  int x = 18;
    //  int y = 0;
    //  //printing the address of x and y 
    //  cout<<&x<<" "<<&y<<endl; //accessing and extracting  the address of 'x' and 'y' using '&' symbol called ampersand 

   /*pointer is a variable that stores the address of another variable*/ 

   int x = 50;
   
   //create a pointer that can store address of x;
   //As x is an integer variable, so we need a pointer
   // that can store address of integer type  

   int *ptr1 = &x;
   cout<<"Address stored inside ptr1: "<<ptr1<<endl;
   cout<<"value present at the address stored in ptr1: "<<*ptr1<<endl;

   float y = 8.45;

   //create a pointer that can store address of y;
   //As y is an float variable, so we need a pointer
   // that can store address of floating type 

   float *ptr2 = &y;
   cout<<ptr2<<endl;





}