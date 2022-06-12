#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a1=1, a2;
    long long counter=0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a2;
        if(a1 > a2){counter+=a2+n-a1;}
        else if( a1 < a2) counter+=a2-a1;
        a1=a2;
    }
    cout << counter;
}
