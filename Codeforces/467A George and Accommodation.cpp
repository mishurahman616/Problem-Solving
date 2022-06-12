#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int pi;
    int qi;
    int counter=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> pi >> qi;
        if((pi+2)<=qi)
            counter++;
    }
    cout << counter;
}
