#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, pi, s=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> pi;
        s+=pi;
    }
    cout << s/(n*1.0000);


}
