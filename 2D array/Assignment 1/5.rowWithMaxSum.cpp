//Write a program to print the row number having the maximum sum in a given matrix.

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
    int maxsum = 0;
    int rowNumber;
    for(int i=0; i<m; i++){
        int sum =0;
        for(int j=0; j<n; j++){
            sum+=arr[i][j];
        }
        if(sum > maxsum){
            maxsum = sum;
            rowNumber = i;
        } 
    }
    cout<<"Row number having maximum sum is "<<rowNumber<<" with sum of "<<maxsum;
}