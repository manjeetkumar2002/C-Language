#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <=5; i++)
    {
        // char ch = 'a' + i - 1;
        for (int j=1;j<=5;j++)
        {
            cout<<char('a' + i -1)<<" "; // we can solve this using typecasting also
        }
        cout<<endl;
    }
    
}

// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 