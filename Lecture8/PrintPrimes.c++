#include<iostream>
using namespace std;
int isPrime(int num){
    // edges case
    if(num<2){
        return false;
    }
    // main code 
    for (int i = 2; i <=num-1; i++)
    {
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] = {1,3,4,5,8,21};
    int N = sizeof(arr)/sizeof(int);
    for (int i = 0; i < N; i++)
    {
        if(isPrime(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
    
}