/*Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed values by 10.*/

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


    int size = v.size();
    for(int i=0; i<size;i++){
        if(i % 2 == 0) v[i]+=10;
        else v[i]*=2;
    }
    
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
}
