#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a=0, b=0, c=0, x, y;
    cin>> n;


        int coins[n];
        for(int i=0; i<n; i++)
            cin>> coins[i];
        sort(coins, coins+n);
    x=0;
    y=n-1;
    while(x<=y){
        if((b+coins[x])<a){
            b+=coins[x];
            x++;
        }
        else{
           a+=coins[y];
           y--;
           c++;
        }

    }
    cout << c;



}
