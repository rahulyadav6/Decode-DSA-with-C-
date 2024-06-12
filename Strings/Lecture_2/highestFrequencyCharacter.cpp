#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s = "raghav";
    vector <int> arr(26,0);
    int n = s.length();
    for(int i=0; i<n; i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int mx = 0;
    for(int i=0; i<26; i++){
        if(arr[i] > mx) mx = arr[i];
    }
    for(int i=0; i<26; i++){
        if(arr[i] == mx){
            cout<<(char)(i+97)<<" "<<mx<<endl;
        }
    }

}