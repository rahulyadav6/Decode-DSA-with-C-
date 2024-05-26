/*
If an array arr contains n elements, then check if the given array is a palindrome or not .
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
    bool flag = true;
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        if(v[i] != v[j]){
            flag = false;
            break;
        }
        i++;j--;
    }
    if(flag == true) cout<<"Array is palindrom";
    else cout<<"Array is not palindrom";
    
}