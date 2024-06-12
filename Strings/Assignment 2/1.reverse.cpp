//Input a string and concatenate with its reverse string and print it.

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string orig = s;
    reverse(s.begin(),s.end());
    cout<<orig+s;

}