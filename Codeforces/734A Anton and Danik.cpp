#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>> l;
    string s;
    cin>> s;

    int countA=0;
    for(int i=0; i<l; i++){
        if(s[i]=='A')
            countA++;
    }
    if(countA*2 == l){
        cout << "Friendship";
    }
    else if (countA*2 > l){
        cout << "Anton";
    }
    else cout << "Danik";
}
