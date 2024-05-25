
//Given an array, predict if the array contains duplicates or not.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,2,3,2,-5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    bool flag = false;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j] == arr[i]){
                flag = true;
                break;
            }
        }
    }
    if(flag == true) cout<<"Dublicate exists";
    else cout<<"Dublicate doesnot exists";
}