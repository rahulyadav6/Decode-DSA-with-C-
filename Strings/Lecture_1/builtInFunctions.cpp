#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str = "Rahulyadav";
    // cout<<str.size();
    // reverse(str.begin(),str.end());
    // cout<<str;
    reverse(str.begin()+2,str.begin()+5);
    cout<<str;
}