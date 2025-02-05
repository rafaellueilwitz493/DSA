#include<iostream>
using namespace std;

int main(){

    int marks[9] = {99,100,54,36,88,44,78,190,150};
    
    int size = sizeof(marks)/sizeof(int);
    // cout<<sizeof(marks)<<endl; /* 4*9=36 */

    for (int i = 0; i < size; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    int size = 5;

    int marks[size];

    for (int i = 0; i < size; i++){
        cin>>marks[i];
    }
    for (int i = 0; i < size; i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}