

//Find the second largest element in the given Array in one pass.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int mx = INT8_MIN;
    int smax = INT8_MIN;


    for(int i=0; i<size; i++){
        if(arr[i] > mx) {
            smax = mx;
            mx = arr[i];
        }else{
            smax = max(smax,arr[i]);
        }
    }

    cout<<mx<<" ";
    cout<<smax;
}