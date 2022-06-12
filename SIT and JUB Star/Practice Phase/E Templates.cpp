#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int length;
    string t;
    string s;
    cin >> n;
    cin >> s;
    t=s;
    length=t.size();
    for(int i=1; i<n; i++){
        cin >> s;
        for(int j=0; j<length; j++){
            if(t[j]!=s[j]){
                t[j]='?';
            }
        }

    }
    cout << t;
}
