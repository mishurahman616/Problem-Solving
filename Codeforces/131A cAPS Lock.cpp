#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, rawString, cAPS, CAPS, Caps;
    cin>> s;
    rawString=s;

    transform(s.begin(), s.end(), s.begin(), ::toupper);// s=CAPS
    CAPS=s;
    cAPS=s; // will be converted to cAPS types

    transform(s.begin(), s.end(), s.begin(), ::tolower); // s=caps
    Caps=s;
    Caps[0]=CAPS[0];//Caps
    cAPS[0]= s[0];
    if(rawString.compare(cAPS)==0) // if cAPS
        {

            cout << Caps; // Caps
        }
    else if (rawString.compare(CAPS)==0) cout << s; // caps
    else cout << rawString;
}
