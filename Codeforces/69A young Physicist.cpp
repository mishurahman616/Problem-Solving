#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, c, s=0, s1=0, s2=0;
    cin>> n;
    while(n--){
        cin>> a>>b>>c;
        s+=a;
        s1+=b;
        s2+=c;
    }
    if(s==0 && s1==0 && s2==0) cout << "YES";
    else cout << "NO";
}
