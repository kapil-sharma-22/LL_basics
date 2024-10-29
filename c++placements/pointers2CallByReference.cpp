#include<iostream>
using namespace std;

void findFirstandLast(string s, char ch, int *first, int *last) {

    // cout<<s.size();

    for(int i=0; i<s.size(); i++) {
         if(s[i] == ch) {
             *first = i;
             break;
         }
    }

    for(int i=s.size()-1; i>=0; i--) {
         if(s[i] == ch) {
            *last = i;
            break;
         }
    }
   
}   

int main() {
     
     string s = "aaabac";
     char ch = 'a';
     int first = -1;
     int last = -1;

     int *pf = &first;
     int *pl = &last;
     
     findFirstandLast(s,ch,pf,pl);

    //  cout<<"In the Main function: " <<endl;  //without pointers 
    //  cout<<"First Occurence: "<<first<<endl;
    //  cout<<"Last Occurence: "<<last<<endl; 

    cout<<"First Occurence: "<<first<<endl;
    cout<<"Last Occurence: "<<last<<endl; 
    
}