/*
Input a string of length n and count all the consonants in the given string.
*/
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string vowels = "aeiouAEIOU";
    int vowelCount = 0;
    for(auto ch: str){
        if(vowels.find(ch) == string::npos){
            vowelCount++;
        }
    }
    cout<<"There are "<<vowelCount<<" consonants in the given string.";
}