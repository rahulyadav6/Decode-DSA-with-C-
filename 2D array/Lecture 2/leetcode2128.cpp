#include <iostream>
using namespace std;
int main(){
    // int arr[3][3] = {{0,1,0}, {1,0,1},{0,1,0}};
    int arr[3][3] = {{1,1,0}, {0,0,0},{0,0,0}};
    for(int i=0; i<3;i++){
        int noo = 0;
        int noz = 0;
        for(int j=0; j<3; j++){
            if(arr[i][j] == 0) noz++;
            else noo++;
        }
        if(noo > noz){
            for(int j=0; j<3; j++){
                if(arr[i][j] == 0) arr[i][j] = 1;
                else arr[i][j] = 0;
            }
        }
    }

    for(int j=0; j<3; j++){
        int noo = 0;
        int noz = 0;
        for(int i=0; i<3; i++){
            if(arr[i][j] == 0) noz++;
            else noo++;
        }
        if(noo > noz){
            for(int i=0; i<3; i++){
                if(arr[i][j] == 0) arr[i][j] = 1;
                else arr[i][j] = 0;
            }
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}