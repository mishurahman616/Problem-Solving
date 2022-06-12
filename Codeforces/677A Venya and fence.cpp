#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, h, ai, width=0;
    cin >> n >> h;
    for(int i=0; i<n; i++){
        cin>> ai;
        if(ai > h) width++;
        width++;
    }
    cout << width;
}
