#include<iostream>
using namespace std;
// WAF to calculate sum & product of all numbers in an array.
int arrSum(int arr[], int sz){
    int sum = 0;
    for (int i = 0; i < sz; i++){
        sum += arr[i];
    }
    return sum;
}

int arrproduct(int arr[], int sz){
    int product = 1;
    for (int i = 0; i < sz; i++){
        product *= arr[i];
    }
    return product;
}

// WAF to swap the max & min number of an array.
void swapMinMaxNo(int arr[], int sz){
    int smallest,largest,smallestIndex,largestIndex;
    for (int i = 0; i < sz; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
            smallestIndex = i;
        }
        else if(arr[i] > largest){
            largest = arr[i];
            largestIndex = i;
        }
    }
    swap(arr[smallestIndex],arr[largestIndex]);
}

// WAF to print all the unique values in an array.
int uniqueVal(int arr[], int sz){
    // {1,2,3,1,2,3,4,5,6}
    int count = 0;
    for (int i = 0; i < sz; i++){
        bool isUnique = true;
        for (int j = 0; j < sz; j++){
            if(i!=j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique == true){
            arr[count] = arr[i];
            count++;
        }
    }
    return count;
}
// WAF to print intersection of 2 arrays.
int arrayIntersection(int arr1[], int arr2[], int sz1, int sz2){
    int count = 0;
        for (int i = 0; i < sz1; i++){
            for (int j = 0; j < sz2; j++){
                if(arr1[i] == arr2[j]){
                    arr1[count] = arr1[i];
                    count++;
                    arr2[j] = INT_MIN;
                }
            }
        }
    return count;
}
// WAF to sort an array in increasing order
void shortarrIncOrd(int arr[],int sz){
    for (int i = 0; i < sz; i++){
        for (int j = 0; j < sz; j++){
            if(arr[i] < arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    int arr[] = {1,2,3,1,2,3,6,4,5,8,10,7};
    int size = sizeof(arr)/4;
    int arr1[] = {10, 15, 22, 80, 10, 5, 70};
    int arr2[] = {5, 10, 11, 22, 70, 90, 10};
    int size1 = sizeof(arr1)/4;
    int size2 = sizeof(arr2)/4;
    shortarrIncOrd(arr,size);

    int uniqueValCount = uniqueVal(arr,size);
    // int arrayIntersectionCount = arrayIntersection(arr1,arr2,size1,size2);
    for (int i = 0; i < uniqueValCount; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
