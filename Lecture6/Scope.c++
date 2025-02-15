#include<iostream>
using namespace std;

int n; // anyone can access this , this is global variable 
int main(){
    // scope means who can access a variable 
    int num ; // anyone can access this

    while(true){
        int rem; // this have scope inside the loop only
    }
   // cout<<rem;
}