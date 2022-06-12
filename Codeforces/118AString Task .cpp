#include<bits/stdc++.h>
#include<string>
using namespace std;
int isVowel(char c){
    if( c=='y' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    else return 0;
}
int main(){
    string s;
    string dot(".");
    cin>> s;
    int l=s.length(), k=0;
    string sc=s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; k<l; i++){
        if(isVowel(s[i])) {
                s.erase(i, 1);
                i=i-1;
        }
            k++;
       }
l=s.length();
     for(int i=0; i<2*l; i++){
        s.insert(i,dot); i++;
       }
    cout << s;

}
