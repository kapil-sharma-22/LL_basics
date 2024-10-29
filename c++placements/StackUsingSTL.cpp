#include<iostream>
#include<stack>
using namespace std;

int main() {
     stack<int> S;

     S.push(5);
     S.push(6);
     S.push(7);
     S.push(8);
     S.push(10);

     cout<<S.size()<<endl;  //size-->5

     S.pop();  //element 10 will be popped

     cout<<S.top()<<endl; //now the top element is 8

     cout<<S.empty()<<endl; //prints 0-->false;
}