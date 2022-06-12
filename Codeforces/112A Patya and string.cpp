#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, s1;
    int r=0;
    cin>> s >> s1;
    int l = s.length();
    for(int i=0; i<l; i++){
        s[i]=tolower(s[i]);
        s1[i]=tolower(s1[i]);
        if(s[i] > s1[i]){

            r=1;
            break;
        }
        else if(s[i]<s1[i]){

            r=-1;
            break;
        }
    }
    cout << r;

}
