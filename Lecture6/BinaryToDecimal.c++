#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num = 101;
    int mul = 1;
    int sum = 0;

    while(num){
        int digit = num%10;
        sum = sum + digit *mul;
        mul = mul * 2;
        num/=10;
    }

    cout<<sum;
}