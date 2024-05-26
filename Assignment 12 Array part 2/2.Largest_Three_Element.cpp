//WAP to find the largest three elements in the array.

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
    int size = v.size();

    int fLargest = INT8_MIN;
    int sLargest = INT8_MIN;
    int tLargest = INT8_MIN;

    for(int i=0; i<size; i++){
        if(v[i] > fLargest){
            tLargest = sLargest;
            sLargest = fLargest;
            fLargest = v[i];
        }else if(v[i] > sLargest){
            tLargest = sLargest;
            sLargest = v[i];
        }else if(v[i] > tLargest){
            tLargest = v[i];
        }
    }
    cout<<fLargest<<endl;
    cout<<sLargest<<endl;
    cout<<tLargest<<endl;
}
