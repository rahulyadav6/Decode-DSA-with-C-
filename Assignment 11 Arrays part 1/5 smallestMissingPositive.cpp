/*
WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements.
*/

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0; i<size; i++){
        if(arr[i] != i+1){
            flag = true;
            cout<<i+1;
            break;
        }
    }
    if(flag == false){
        cout<<"No missing element found.";
    }
}