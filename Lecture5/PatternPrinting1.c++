#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <=5; i++)
    {
        // print the space
        for (int space = 1; space <=i-1; space++)
        {
            cout<<"  ";
        }
        // print the rows
        for(int j = i;j<=5;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// 1 2 3 4 5
//   2 3 4 5
//     3 4 5
//       4 5
//         5