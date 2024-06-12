//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "098765678";
    int m = 0;
    int smax = 0;
    for(int i=0; i<s.length(); i++){
        int d = s[i]-'0';
        if(d>m){
            smax = m;
            m = d; 
        }else if(d > smax && d < m) smax = d;
    }
    cout<<smax;
}