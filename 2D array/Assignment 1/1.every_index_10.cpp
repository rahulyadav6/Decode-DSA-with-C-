//Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

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
            arr[i][j] = 10;
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
}