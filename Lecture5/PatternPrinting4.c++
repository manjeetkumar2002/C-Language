#include<iostream>
using namespace std;
int main(){
    for(int i = 1 ; i <=5; i++){
        // print the space
        for(int space = 1 ;space<= i-1;space++)
            cout<<" ";
        // print the stars
        for (int j = 1; j <=(6-i); j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 