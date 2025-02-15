// Given a number , check if it is divisble by 3 and 5
#include<iostream>
using namespace std;
int main(){
    int num = 34;

    if(num%3 == 0 && num%5 == 0)
        cout<<"Perfect";
    else 
        cout<<"Not perfect";
}