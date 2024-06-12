//Given an array of strings. Check whether they are anagram or not.

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "car";
    string t = "arc";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s == t) cout<<"true";
    else cout<<"false";
}