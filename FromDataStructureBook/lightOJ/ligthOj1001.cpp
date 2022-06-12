#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, n, a, b;
    cin>> T;
    while(T--){
        cin>> n;
        if(n>10){
            cout << n-10 << " " << 10 << endl;
        }
        else cout << n << " " << 0 << endl;

    }
}
