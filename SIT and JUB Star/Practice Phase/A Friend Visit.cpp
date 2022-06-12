#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >>c;
    int ab=(a-b)>0?(a-b):(b-a);
    int bc=(b-c)>0?(b-c):(c-b);
    cout << ab+bc;
}
