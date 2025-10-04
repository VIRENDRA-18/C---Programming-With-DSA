
/* Practice Ques: Given an array of marks of students, if the marks of any student is less than 35 print its roll
                  number. [roll number here refers to the index of the array.]*/

                  
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of students : ";
    cin>>n;

    int marks[n]; // 0 to n-1
    cout<<"Enter a marks : ";
    // input ke liye
    for(int i=0; i<=n-1; i++){
        cin>>marks[i];
    }

    // output
    for(int i=0; i<=n-1; i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}