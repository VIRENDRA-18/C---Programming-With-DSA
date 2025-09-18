#include<iostream>
using namespace std;

int Factorial(int x){ 
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact *= i;
    }
    return fact;
}

int combinations(int n, int r){ 
    int ncr = Factorial(n) / (Factorial(r) * Factorial(n - r));
    return ncr;
    
    
}

int main(){
    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<combinations(i,j)<<" "; 
            
        }
        cout<<endl;
    }
    
}
