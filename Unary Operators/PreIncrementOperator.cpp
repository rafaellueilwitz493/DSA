// a++ ---------> Kaam;Update ---> Post Increment Operator
// ++a ---------> Update;Kaam ---> Pre Increment Operator

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = ++a; //update ; kaam

    cout<<"b = "<<b<<endl;
    cout<<"a = "<<a<<endl;
    return 0;
}