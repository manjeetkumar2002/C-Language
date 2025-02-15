#include<iostream>
using namespace std;
int main(){
    int num1 = 200 ,num2 = 520 ,num3 = 310;
    if(num1>=num2&&num1>=num3){
        cout<<num1<<" is greater"<<endl;
    }
    else if(num2>=num1&&num2>=num3){
        cout<<num2<<" is greater"<<endl;
    }
    else{
        cout<<num3<<" is greater"<<endl;
    }
}