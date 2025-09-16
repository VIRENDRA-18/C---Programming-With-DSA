#include<iostream>
using namespace std;

int Factorial(int x){ // using function calculate factorial
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact *= i;
    }
    return fact;
}

int combinations(int n, int r){ // using inbuilt function calculate nCr
    int ncr = Factorial(n) / (Factorial(r) * Factorial(n - r));
    return ncr;
    
    
}

int permutations(int n, int r){ // using inbuilt function calculate nPr
    int npr = Factorial(n) / (Factorial(n - r));
    return npr;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    int r;
    cout<<"Enter r : ";
    cin>>r;
    
    // int nfact = 1;  // nfact
    // for(int i=2; i<=n; i++){
    //     nfact *= i;
    // }
    
    // int rfact = 1;  // rfact
    // for(int i=2; i<=r; i++){
    //     rfact *= i;
    // }
    
    // int nrfact = 1; // (n-r)fact
    // for(int i=2; i<=n-r; i++){
    //     nrfact *= i;
    // }
    // int nfact = Factorial(n);
    // int rfact = Factorial(r);
    // int nrfact = Factorial(n-r);
    // int ncr = nfact/(rfact*nrfact);  // nCr = n! / (r! * (n-r)!)
    int ncr = combinations(n, r); // using inbuilt function
    int npr = permutations(n, r); // using inbuilt function
    cout<<ncr<<endl<<npr<<endl;
}