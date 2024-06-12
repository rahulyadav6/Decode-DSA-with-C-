/*
Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
0-based indexing.
*/
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int size = str.length();
    for(int i=0; i<size; i++){
        if(i%2 != 0){
            str[i] = '#';
        }
    }
    cout<<str;
}