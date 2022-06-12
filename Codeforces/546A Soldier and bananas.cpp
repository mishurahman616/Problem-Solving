#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k, n, w, s=0, p;
    cin>> k >> n >> w;

    for(int i=1; i<=w; i++){
        s+=i;

    }
    p=s*k;
   if(p>n) cout << p-n;
   else cout << 0;
}
