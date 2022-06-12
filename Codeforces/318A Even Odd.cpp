#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    long long mid= ceil(n/(2*1.0));
    if(k<=mid){
        cout << k*2-1;
    }
    else cout << (k-mid)*2;
}
