/*
Input a string of length less than 10 and convert it into integer without using builtin function.
*/
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int x = 0;
    for(auto ch:str){
        x *= 10;
        x+=(ch - '0');
    }
    cout<<str<<endl;
    cout<<x;
}