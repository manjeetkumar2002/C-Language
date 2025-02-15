#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for (int i = 1; i <=row; i++)
    {
        // print the space
        for (int  space = 1; space <=row-i; space++)
        {
            cout<<" ";
        }
        // print the stars
        for (int j = 1; j <=(2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

//    *
//   ***
//  *****
// *******
//*********
