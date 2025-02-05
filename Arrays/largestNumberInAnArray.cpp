#include<iostream>
using namespace std;

int main(){
    int nums[9] = {99,100,54,-18,88,44,78,190,150};
    int size = 9;

    int largest = INT_MIN; /* -infinity */

    // for (int i = 0; i < size; i++){
    //     if(nums[i] > largest){
    //         largest = nums[i];
    //     }
    // }

    for (int i = 0; i < size; i++){
        largest = max(nums[i],largest);
    }
    cout<<"Largest Number is: "<<largest<<endl;
    return 0;
}