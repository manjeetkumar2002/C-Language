#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <=10; i++)
    {
        if(i==5)
        continue;
        cout<<i<<" ";
    }
    // 1 2 3 4 6 7 8 9 10 
    // 5th iteration is skipped 
    cout<<endl;
    for (int i = 1; i <=10; i++)
    {
        if(i==5)
        break;
        cout<<i<<" ";
    }
    //1 2 3 4 
    // at 5th iteration loop will break
}