/*
Input a string of even length and reverse the second half of the string.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string of even length: ";
    getline(cin,str);
    int n = str.length()/2;
    // reverse(str.begin(),str.end());
    reverse(str.begin()+n,str.end());
    cout<<str<<endl;
}