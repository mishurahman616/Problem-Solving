#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int bill;
    bill+=(int) n/100;
    n=n%100;
    bill+=(int) n/20;
    n=n%20;
    bill+=n/10;
    n=n%10;
    bill+=n/5;
    n=n%5;
    bill+=n;
    cout << bill;
}
