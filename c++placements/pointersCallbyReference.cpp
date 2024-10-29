 #include<iostream>
 using namespace std;

/*The swap function uses pointers to access and swap the values of x and y directly in memory.
By passing the addresses of x and y to the function, the swap function can manipulate 
the original variables rather than working with copies*/
 void swap(int *x, int *y) {   
     
   int temp = *x;
   *x = *y;
   *y = temp;
 }

 int main() {
     int x=10;
     int y=20;

     int *p1 = &x;
     int *p2 = &y;

     swap(p1,p2); //passing the address of x and y 

     cout<<x<<" " <<y<<endl;
 }