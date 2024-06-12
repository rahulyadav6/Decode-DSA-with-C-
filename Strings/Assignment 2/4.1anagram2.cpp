#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    string t;
    cout<<"Enter another string: ";
    cin>>t;
    int n1 = t.size();
    int n = s.length();
    bool flag = true;
    if(n != n1) flag = false;
    else{
        vector<int>v(26,0);
        for(int i=0; i<n; i++){
            v[s[i] - 'a']++;
            v[t[i] - 'a']--;
        }
        int n2 = v.size();
        for(int i=0; i<n2; i++){
            if(v[i] != 0){
                flag = false;
                break;
            } 
        }
    } 
    if(flag == false) cout<<"Not a anagram.";
    else cout<<"Anagram";
}