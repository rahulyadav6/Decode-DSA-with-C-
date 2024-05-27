/*
Count the number of triplets whose sum is equal to the given value x.
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(10);
    int sum = 50;
    int n = v.size();
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(v[i] + v[j] + v[k] == sum) count++;
            }
        }
    }
    cout<<count;
}