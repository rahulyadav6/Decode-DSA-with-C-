//Write a program to add two matrices and save the result in one of the given matrices.

#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int p;
    cout<<"Enter number of rows: ";
    cin>>p;
    int q;
    cout<<"Enter number of columns: ";
    cin>>q;
    int brr[p][q];
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>brr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i][j]+=brr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}