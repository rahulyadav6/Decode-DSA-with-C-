#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int num = 0;
    for(int i=0;i<str.size(); i++){
        num = num*10;
        num+=(str[i] - '0');
    }
    cout<<num;
}