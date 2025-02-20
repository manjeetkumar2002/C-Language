#include <iostream>
#include <vector>
using namespace std;

// Function to find equilibrium point in the array.
int findEquilibrium(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        // find the left and right sum
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j <= i - 1; j++)
            leftSum += arr[j];

        for (int j = i + 1; j <= arr.size() - 1; j++)
            rightSum += arr[j];

        if (leftSum == rightSum)
            return i;
    }

    return -1;
}

// approach 2 :- using preSum and posSum 
int findEquilibrium(vector<int> &arr) {
    int leftSum = 0;
    int rightSum = 0;
    
    // calculate the total sum and store it in rightSum
    for(int i=0;i<arr.size();i++){
        rightSum+=arr[i];
    }
    

    for(int i=0;i<arr.size();i++){
        rightSum -= arr[i]; // calculate the right sum by subracting the current element
        
        if(leftSum == rightSum){ // check if they are equal
            return i;   
        }
        
        leftSum+=arr[i]; // add the current element to left sum 
    }
    
    return -1;
  }
int main()
{
    vector<int> arr ={-7, 1, 5, 2, -4, 3, 0};
    cout<<findEquilibrium(arr);
}