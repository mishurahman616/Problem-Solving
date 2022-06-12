#include<bits/stdc++.h>
using namespace std;
int main(){
long long n, m, a, x, y;
cin>> n >> m >> a;
x=ceil((n*1.0)/a);
y=ceil((m*1.0)/a);
cout <<fixed<< x*y;
}
