/*
Find the first non-repeating element in the array .
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    int n = v.size();
    bool flag = false;
    for(int i=0; i<n; i++){
        flag = false;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            else if(v[i] == v[j]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            cout<<v[i];
            break;
        }
    }
}