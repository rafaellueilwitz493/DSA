#include<iostream>
using namespace std;

int sumofNaturalNumber(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i; // sum = sum + i;  
        cout<<i<<(i < n ? " + ":""); // ternary operator
    }
    cout<<" = ";
    return sum;
}
int sumofOddNumber(int n){
    int oddSum = 0;
    for(int i = 1; i <= n; i++){  
        if((i%2) != 0){
            oddSum += i; // oddSum = oddSum + i;  
            cout<<i<<(i < n-1 ? " + ":""); // ternary operator
        }
    }
    cout<<" = ";
    return oddSum;
}
int checkifTheNumberIsPrimeOrNot(int n){
    bool isPrime = true;
    // for(int i = 2; i < n; i++){
    //     if(n%i==0){ // non-prime
    //         isPrime = false;
    //         break;
    //     }
    // }
    for(int i = 2; i*i <= n; i++){      /* (Star) */ 
        if(n%i==0){ // non-prime
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int sumofNumberDivisibleBy3(int n){
    int DivisibleBy3 = 0;
    for(int i = 1; i <= n; i++){  
        if((i%3) == 0){
            DivisibleBy3 += i; // oddSum = oddSum + i;  
            cout<<i<<(i < n-1 ? " + ":""); // ternary operator
        }
    }
    cout<<" = ";
    return DivisibleBy3;
}
int factorialOfANumber(int n){
    int nFactorial = 1;
    cout<<n<<"! = "<<" ";
    for(int i = 1; i<=n; i++){
        nFactorial *= i;
        cout<<i<<(i < n ? " * ":"");
    }
    cout<<" = ";
    return nFactorial;
}
int main(){
    // cout<<sumofNaturalNumber(4)<<endl;
    // cout<<sumofOddNumber(3)<<endl;
    // int n = 10;
    // cout<<(checkifTheNumberIsPrimeOrNot(n) == true?"Prime No":"Non-Prime No")<<endl;
    // cout<<sumofNumberDivisibleBy3(10)<<endl;
    cout<<factorialOfANumber(6)<<endl;

    return 0;
}