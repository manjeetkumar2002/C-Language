#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // method 2 :-
    int num  = 123452;
    long long sum = 0;
    long long  mul = 1;
    while(num){
        int digit = num % 2;
        sum = sum + digit * mul;
        num/=2;
        mul = mul *10;
    }
    cout<<sum;

}