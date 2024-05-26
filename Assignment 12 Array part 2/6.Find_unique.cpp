/*
Find the unique number in a given Array where all the elements are being repeated twice with one
value being unique.
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(1);

    bool flag;
    int size = v.size();

    for(int i=0; i<size;i++){
        flag = false;
        for(int j=0; j<size; j++){
            if(i==j) continue;
            else if(v[i] == v[j]) flag = true;
        }
        if(flag == false){
            cout<<v[i];
            break;
        } 
    }
    
}