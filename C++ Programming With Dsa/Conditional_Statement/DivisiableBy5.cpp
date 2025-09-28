#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : "; // Prompt the user to enter a number
    cin>>n;                  // Promt Take a User Input

    // Check if the number is divisible by 5
    
    if(n%5==0){
        cout<<"Number is divisiable by 5 ";
    }
    else{
        cout<<"Number is not divisiable by 5 ";
    }
}