/*
Check whether the given string is palindrome or not.
*/
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int i=0;
    int j=str.length()-1;
    bool flag = true;
    while(i<=j){
        if(str[i] != str[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag == false){
        cout<<"Not a palindrom ";
    }else{
        cout<<"Palindrome ";
    }
}