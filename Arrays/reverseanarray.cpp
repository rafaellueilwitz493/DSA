#include<iostream>
using namespace std;

// void reverseAnArray(int arr[], int size) {
//     for (int i = 0; i < size/2; i++) {
//         int end = size-i-1;
//         swap(arr[i],arr[end]);
//     }
// }

// Time Complexity -> O(n)
void reverseAnArray(int arr[], int sz){
    int start = 0;
    int end = sz - 1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5, 3};
    int size = sizeof(arr)/4;
    
    reverseAnArray(arr,size);
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}