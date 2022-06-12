#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c=0;
    cin>> n;
    while(n){
        if(n>=5){
            c+=n/5;
            n=n%5;
        }
        else if(n==4){
            c+=n/4;
            n=0;
        }
        else if(n==3){
            c+=n/3;
            n=0;
        }
        else if(n==2){
            c+=n/2;
            n=0;
        }
        else{
           c++;
           n=0;
        }
    }
    cout << c;
}
