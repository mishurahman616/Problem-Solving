#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        if(n<11){
            cout << 0 << " " << n << endl;
        }else{
            cout << n-10 << " " << 10 << endl;
        }
    }
}
