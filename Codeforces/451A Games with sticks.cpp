#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, dot, remain, removedot;
    cin >> n >> m;
    dot = n*m;
    bool turn=true, AWin=true;
    bool MWin=false;
    while(dot>0){
        n=n-1;
        m=m-1;
        dot =n*m;
        if(turn){
            AWin=true;
            MWin=false;
            turn=false;

        }
        else {
            MWin=true;
            AWin=false;
            turn=true;
        }
    }
    if(AWin) cout << "Akshat";
    else cout << "Malvika";
}
