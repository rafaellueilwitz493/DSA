#include<iostream>
using namespace std;

// Time Complexity -> O(n)
int linearsearch(int arry[],int sz,int target){
    for (int i = 0; i < sz; i++){
        if(arry[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {9 , 5, 4, 6, 3, 6, 1, 7};
    int target = 4;
    int size = sizeof(arr)/4;
    cout<<linearsearch(arr,size,target)<<endl;

    return 0;
}