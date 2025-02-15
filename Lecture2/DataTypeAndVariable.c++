#include<iostream>
using namespace std; 
int main(){
    // variable are used to store values 
    int number = 10; // number is assign 10 value and number is of type int ,size = 4Byte
    char character = 'A'; // character is assign to 'A' and character is of type char  ,size = 1Byte 
    float decimal_number = 12.45; // size = 4Byte
    double decimal_number1 =1234.455; // size = 8Byte
    bool flag = true; // bool store true/1 and false/0 , size = 1Byte

    //printing the variables
    cout<<number<<endl; 
    cout<<character<<endl;
    cout<<decimal_number<<endl;
    cout<<decimal_number1<<endl;
    cout<<flag<<endl;
    // sizeof() used to check the size of data type
    
    // cout<<sizeof(double)<<endl;
    // cout<<sizeof(int)<<endl;
    // cout<<sizeof(char)<<endl;

    // Type casting 
    char c = 65;
    int num = 'A';
    char ch = 590; // char take 1Byte = 8Bit => maximum possible value is 256 ,590 is exceeded then it mod it 590%256 = 78   
    cout<<c<<endl; // output :- 'A'
    cout<<num<<endl; // output :- 65
    cout<<ch<<endl; // output :- N (78)
    return 0;
}