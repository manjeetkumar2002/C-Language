#include<iostream>
using namespace std;
int main(){
    int num , divisor = 2;
    cout<<"Enter a number : ";
    cin>>num;
    // Edge cases
    if(num<=1){
        cout<<"Not a  prime"<<endl;
        return 0;
    }

    while(divisor*divisor<num){
        if(num%divisor == 0){
            cout<<"Not a prime "<<endl;
            return 0;
        }
        divisor++;
    }
    
    cout<<"It is prime";
    return 0;
}