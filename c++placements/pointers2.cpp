#include<iostream>
using namespace std;

int main() {
    //  int x = 100;
     
    //  int *ptr = &x;

    //  cout<<"Address stored in the ptr: "<<ptr<<endl;
    //  cout<<"Value present at the address stored in ptr: "<<*ptr<<endl;

    //  x = 200;

    //  cout<<"New updated value of x is: "<<x<<endl;
    //  cout<<"pointer(ptr) is stilling pointing to same memory containing 200 instead of 100: "<<ptr<<endl;

    //  //updating x with pointer 
    //  *ptr = 200;

    //  cout<<"New value of x is: "<<*ptr<<endl;

    /*------------------>>>Pointer Example<<<---------------------------*/

    int x , y ; //declare variables x and y 

    cin>>x>>y;

    int *ptrx = &x;  //&x fetches the address and then store it in ptrx
    int *ptry = &y;  //&y fetches the address and then store it in ptry

    int result;

    int *ptr_result = &result;

    *ptr_result = *ptrx + *ptry;

    cout<<"result: "<<result <<endl;
    cout<<"*ptr_result:"<<*ptr_result<<endl;

     





     


}