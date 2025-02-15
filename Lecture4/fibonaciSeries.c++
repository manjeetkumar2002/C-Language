#include<iostream>
using namespace std;
int main(){
    int first_num = 0 ,second_num = 1 , n;
    int current_num;
    cin>>n;
    // Edge cases
    if(n==1){
        cout<<first_num;
        return 0;
    }
    if(n==2){
        cout<<second_num;
        return 0;
    }
    int i = 3;
    while(i<=n){
        current_num = first_num + second_num;
        first_num = second_num;
        second_num = current_num;
        i++;
    }
    cout<<current_num;

}