//Write a program to rotate the matrix by 90 degrees anti-clockwise.

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

    //transpose;
    for(int i=0; i<m; i++){
        for(int j= i+1; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int j=0; j<n; j++){
        int p=0;
        int q=m-1;
        while(p<=q){
            int temp = arr[p][j];
            arr[p][j] = arr[q][j];
            arr[q][j] = temp;
            p++;
            q--;
        }
    }
    //matrix print
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}