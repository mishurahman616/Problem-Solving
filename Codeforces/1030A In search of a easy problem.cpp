#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, counter=0;
    cin>>n;
    while(n--){
        cin >> a;
        counter+=a;
    }
    if(counter)
        cout << "HARD";
    else cout << "EASY";
}
