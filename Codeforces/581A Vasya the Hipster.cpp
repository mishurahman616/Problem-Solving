#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, diff, same;
    cin >> a >> b;
    if( a >= b){
        cout << b << " ";
        cout << (a-b)/2;
    }
    else{
        cout << a << " ";
        cout << (b-a)/2;
    }

}
