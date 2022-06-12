#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, face=0;
    string s;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> s;
        if(s[0]=='T') face+=4;
        else if(s[0]=='C') face+=6;
        else if(s[0]=='O') face+=8;
        else if(s[0]=='D') face+=12;
        else if(s[0]=='I') face+=20;
    }
    cout << face;
}
