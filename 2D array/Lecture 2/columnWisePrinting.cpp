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

    for(int j=0; j<n; j++){
        if(j%2==0){
            for(int i=0; i<m; i++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int i=m-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}