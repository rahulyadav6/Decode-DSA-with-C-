#include <iostream>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","940","002901"};
    int max = stoi(arr[0]);
    int n = arr->size();
    for(int i=1; i<=n+1; i++){
        if(stoi(arr[i]) > max) max = stoi(arr[i]);
    }
    cout<<max<<endl;
}