#include<iostream>
using namespace std;

int main(){
    int nums[9] = {99,100,54,-18,88,44,78,190,150};
    int size = 9;

    int smallest = INT_MAX; /* +infinity */

    // for (int i = 0; i < size; i++){
    //     if(nums[i] < smallest){
    //         smallest = nums[i];
    //     }
    // }
    
    for (int i = 0; i < size; i++){
        smallest = min(nums[i],smallest);
    }

    cout<<"Smallest Number is: "<<smallest<<endl;

    return 0;
}