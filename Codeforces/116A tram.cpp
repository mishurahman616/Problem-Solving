#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, n, p=0, m=0;
    cin>> n;
    while(n--){
        cin>> a >> b;
        p-=a;
        p+=b;
        if(p>m) m=p;
    }
    cout << m;
}
