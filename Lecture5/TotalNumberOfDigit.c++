#include<iostream>
using namespace std;
int main(){
    // Total numbers of digit in a number 
    // example : 23567 => 5 digit number

    int n = 243554536;
    // method 1
    // int num = 10;
    // int digit = 1;

    // for (int  i = 1; i <=1000; i++)
    // {
    //     if(n/num == 0){
    //         cout<<digit<<endl;
    //         return 0;
    //     }
    //     num = num * 10;
    //     digit++;
    // }
    
    int digits = 0;

    while(n>0){
        n/=10;
        digits++;
    }
    cout<<digits;
}