#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <=5; i++)
    {   
        // print the start
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        // print the space 
        for (int space =1; space <=2*5-2*i; space++)
        {
            cout<<" ";
        }
        
        // print the start
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = 1; i <=5-1; i++)
    {   
        // print the star
        for (int j = 1; j <=5-i; j++)
        {
            cout<<"*";
        }
        // print the space 
        for (int space = 1; space <=2*i; space++)
        {
            cout<<" ";
        }
        
        // print the star
        for (int j = 1; j <=5-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *