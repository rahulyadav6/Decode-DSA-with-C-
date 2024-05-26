/*
Find the difference between the sum of elements at even indices to the sum of elements at odd
indices.
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    int evenSum = 0;
    int oddSum = 0;


    int size = v.size();
    for(int i=0; i<size;i++){
        if(i % 2 == 0) evenSum+=v[i];
        else oddSum+=v[i];
    }
    cout<<evenSum-oddSum;
}
