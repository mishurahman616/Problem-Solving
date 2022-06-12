#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c=0;
    cin>> a >> b;
    while(a<=b){
        a=3*a;
        b=2*b;
        c++;
    }
    cout << c;

}
