#include<bits/stdc++.h>
using namespace std;
int main(){
    string p;
    getline(cin, p);
    int l=p.length(), flag=0;
    for(int i=0;i<l; i++){
        if(p[i]=='H' || p[i]=='Q'|| p[i]=='9'){
            flag=1;
            break;
        }

    }
    if(flag) cout << "YES";
    else cout << "NO";

}
