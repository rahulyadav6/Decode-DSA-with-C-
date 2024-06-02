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

    for(int i=0; i<m; i++){
        for(int j=i+1; j<n; j++){
            if(i!=j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}