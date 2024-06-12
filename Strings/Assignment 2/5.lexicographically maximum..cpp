//Given a sentence ‘str’, return the word that is lexicographically maximum.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a sentence: ";
    getline(cin,s);
    stringstream ss(s); 
    string temp;
    string maxWord = "";
    while(ss>>temp){
        if(temp > maxWord) maxWord = temp;
    }
    // cout<<v[n];
    cout<<maxWord<<endl;
}
