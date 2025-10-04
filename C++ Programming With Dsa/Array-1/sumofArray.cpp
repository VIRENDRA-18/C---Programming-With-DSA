#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;

    // input
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

       // pre array ka sum print karna hai 
    int sum = 0;
    for(int i=0; i<=n-1; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
}