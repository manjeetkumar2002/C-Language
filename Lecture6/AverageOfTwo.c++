#include<iostream>
using namespace std;
int average(int a,int b){
    return (a+b)/2;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<average(num1,num2);
}