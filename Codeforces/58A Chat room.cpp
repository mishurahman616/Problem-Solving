#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0, flag=0, l=s.length();
    for(i; i<l; i++){
        if(s[i]=='h') { break;}

    }

    for(i=i+1; i<l; i++){
        if(s[i]=='e'){break;}
    }

    for( i=i+1; i<l; i++){
        if(s[i]=='l') { break;}
    }

     for(i=i+1; i<l; i++){
        if(s[i]=='l') { break;}
    }

     for(i=i+1; i<l; i++){
        if(s[i]=='o'){flag=1; break;}

    }

    if(flag) cout << "YES";
    else cout << "NO";
}
