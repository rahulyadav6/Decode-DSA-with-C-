//Write a program to print the elements of both the diagonals in a square matrix.
#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of matrix: ";
    cin>>m;
    int n;
    cout<<"Enter columns of matrix: ";
    cin>>n;

    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            if(i==j|| i+j == m-1){
                cout<<arr[i][j]<<" ";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}