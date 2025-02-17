#include<iostream>
using namespace std;

int factorial(int num = 4){
    int fact = 1;
    for (int i = 1; i <=num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main(){
    int num;
    cin>>num;
    int result = factorial(num);
    cout<<result;
}