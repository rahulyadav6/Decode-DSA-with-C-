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

    int trans[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            trans[i][j] = arr[j][i];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}