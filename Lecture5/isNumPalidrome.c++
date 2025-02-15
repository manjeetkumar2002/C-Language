#include<iostream>
using namespace std;
int main(){
    int num = 12121;
    int reverse = 0;
    int temp = num;
    while (num>0)
    {
        int rem = num%10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    if(temp == reverse){
        cout<<"Number is palidrome";
    }
    else{
        cout<<"Number is not palidrome";
    }
}