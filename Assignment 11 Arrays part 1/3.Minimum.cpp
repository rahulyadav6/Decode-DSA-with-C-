

//Find the minimum value out of all elements in the array.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,2,3,4,-5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int minimunValue = INT8_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < minimunValue) minimunValue = arr[i];
    }
    cout<<minimunValue<<" ";
}