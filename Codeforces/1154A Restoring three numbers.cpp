#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[4], a, b, c;

    cin >> x[0] >> x[1] >> x[2] >> x[3];

    sort(x, x+4);

    a = x[3]-x[2];
    b = x[3]-x[1];
    c = x[3]-x[0];
    cout << a << " " <<  b << " " << c;



}
