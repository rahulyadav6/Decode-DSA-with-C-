//Write a C++ program to find the largest element of a given 2D array of integers.

#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<=m-1;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //normal printing
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int max = INT8_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    cout<<max;
}