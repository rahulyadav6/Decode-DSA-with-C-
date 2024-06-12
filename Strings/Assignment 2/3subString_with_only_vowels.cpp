//Input a string and return the number of substrings that contain only vowels.

#include <iostream>
using namespace std;
bool isVowel(char c){
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int count = 0;
    int answer = 0;
    int n = s.length();
    for(int i=0; i<n; i++){
        if(isVowel(s[i])) count++;
        else{
            answer += (count*(count + 1)/2);
            count = 0;
        }
    }
    answer += (count * (count+1)/2);
    cout<<answer<<endl;
}