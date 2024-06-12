#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string str = "Rahul rahul is a good boy";
    stringstream ss(str);
    string temp;

    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    } 
    int n = v.size();
    sort(v.begin(),v.end());
    int maxCount = 1;
    int count = 1;
    for(int i=1; i<n; i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        maxCount = max(count,maxCount);
    }

    count = 1;
    for(int i=1; i<n; i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        if(count == maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }

}