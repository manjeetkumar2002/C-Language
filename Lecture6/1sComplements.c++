#include<iostream>
using namespace std;
int main(){
    int num = 10110;
    int sum = 0;
    while(num){
        int digit = num %10;
        sum = sum * 10 + (digit^1);
        num /= 10;
    }
    // reverse this sum
    int reverse = 0;
    while(sum){
        int digit = sum % 10;
        reverse = reverse * 10 + digit;
        sum/=10;
    }
    cout<<reverse;
}