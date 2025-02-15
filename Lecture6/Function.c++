#include<iostream>
using namespace std;
int isEven(int num){
    if(num%2)
        cout<<"Number is Odd";
    else
        cout<<"Number is Even";
}
int main(){
    int num = 5;
    isEven(num);
}