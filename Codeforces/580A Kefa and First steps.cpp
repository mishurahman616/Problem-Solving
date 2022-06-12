#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, maxLength=0, length=0, a=0, b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>> b;
        if(a<=b) {length++; }
        else {
                if(length>maxLength) maxLength=length;
                length=1;

        }

        a=b;
    }
    // if last one is not decreasing then else will not execute so
     if(length>maxLength) maxLength=length;
    cout << maxLength;
}
