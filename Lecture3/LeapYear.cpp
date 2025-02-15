#include<iostream>
using namespace std;
int main(){
    // CONDITION :
    // A year is leap year is it is divisble by 400 
    // A year is also a leap year if it is divible by 4 and not divisible by 100
    int year = 1900;

    if(year%400==0||(year%4==0&&year%100!=0))
        cout<<"It is Leap year"<<endl;
    else
        cout<<"It is Not a Leap year"<<endl;
    return 0;
    
}