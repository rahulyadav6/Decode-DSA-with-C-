


//  Calculate the product of all the elements in the given array.


#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int mul = 1;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        mul = mul* arr[i];
    }
    cout<<mul<<endl;
}