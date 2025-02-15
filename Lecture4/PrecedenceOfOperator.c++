#include<iostream>
using namespace std;
int main(){
    int n = 5>2-2*4;
    // this expression is solve in this order
    // 2*4 = 8
    // 2-8 = -6
    // 5>-6 = 1
    cout<<n; // output 1
}