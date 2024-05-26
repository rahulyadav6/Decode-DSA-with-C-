//Count the number of elements strictly greater than x.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(12);
    v.push_back(5);
    v.push_back(23);
    v.push_back(67);
    v.push_back(34);
    v.push_back(1);
    int x;
    cout<<"Enter a number ";
    cin>>x;
    int size = v.size();

    int count = 0;
    for(int i=0; i<size; i++){
        if(v[i] > x) count++;
    }
    if(count != 0) cout<<"There are " <<count<<" numbers greater than "<<x<<" in the array";
    else cout<<"There is not any number greater than "<<x<<" in the array";
}