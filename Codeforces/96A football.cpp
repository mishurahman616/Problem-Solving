#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    int l=s.length();
    int c=1;
    while(--l){
        if(s[l]==s[l-1]) c++;
        else c=1;
        if(c==7) break;
    }
    if(c==7) cout << "YES";
    else cout << "NO";
}
