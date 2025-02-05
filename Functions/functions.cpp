#include<iostream>
using namespace std;

int minimumOfTwoNumbers(int a,int b){
    if (a > b){
        return b;
    }else{
        return a;
    }
}
int sumOfNumbers(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}
int factorialN(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}
int sumOfDigits(int num){
    int dightSum = 0;
    while (num > 0){
        int lastDight =  num%10;
        num = num / 10;
        dightSum += lastDight;
    }
    return dightSum;
}
// nCr = n!/r!(n-r)!

int factorial(int n){
    int fact = 1; 
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    
    return fact_n / (fact_r * fact_nmr);
}

int checkPrimeNumber(int n){
    bool isPrime = true;
    for (int i = 2; i*i <= n; i++){
        if(n % i == 0){ // non-prime
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

void primeNumbers(int fromNumber, int toNumber){

    int primeNumber = fromNumber;

    for (int i = primeNumber; i <= toNumber; i++){
        bool isPrime = true;
        for (int j = 2; j*j <= primeNumber; j++){
            if (primeNumber % j == 0){
                isPrime = false;
                break;
            }   
        }
        if(isPrime == true){
            if(primeNumber > 1){
                cout<<primeNumber<<" ";
            }
        }

        primeNumber += 1;
    }
    cout<<endl;
}

int main(){
    // cout<<"minimum = "<<minimumOfTwoNumbers(5,3)<<endl;
    // cout<<sumOfNumbers(4)<<endl;
    // cout<<factorialN(4)<<endl;
    // cout<<sumOfDigits(567)<<endl;
    // cout<<nCr(8,2)<<endl;
    // cout<<(checkPrimeNumber(7)==true?"No is Prime":"No is Non-Prime")<<endl;
    primeNumbers(5,20);
    return 0;
}