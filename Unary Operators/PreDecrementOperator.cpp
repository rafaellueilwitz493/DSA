// a-- ---------> Kaam;Update ---> Post Decrement Operator
// --a ---------> Update;Kaam ---> Pre Decrement Operator

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = --a;

    cout<<"b = "<<b<<endl;
    cout<<"a = "<<a<<endl;
    return 0;
}