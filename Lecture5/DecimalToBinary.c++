#include<iostream>
#include<string>
using namespace std;
int main(){
    // using the array
    int num = 1232;
    int sum[32];
    int i = 0;
    while (num>0)
    {     
        sum[i++] = num % 2;
        num/=2;
    }
    
    // reverse the sum
    for(int j =i-1;j>=0;j--)
        cout<<sum[j];
}