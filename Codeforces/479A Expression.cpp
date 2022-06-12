#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>> a >> b >> c;

    if(a==1 && b==1 && c==1)
        cout << 3;

    else if (a==1){
            if(b==1) cout << (a+b)*c;
            else if(c==1) cout << a+b+c;
            else cout << (a+b)*c;
    }
    else if(c==1){
       cout << a*(c+b);
    }
    else if (b==1) {
        if (a>c) cout << a* (b+c);
        else cout << c*(a+b);
    }
    else cout << a*b*c;
}
