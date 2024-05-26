//Check if the given array is sorted or not

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
    bool flag = true;
    for(int i=1; i<size;i++){
        if(v[i] < v[i-1]){
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"Array is sorted. ";
    else cout<<"Array is not sorted.";
}
