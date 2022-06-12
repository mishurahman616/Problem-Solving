#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  n;
    long long t;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cout << (long long)((sqrt(1+(8*n))-1)/2) << endl;

    }
}
