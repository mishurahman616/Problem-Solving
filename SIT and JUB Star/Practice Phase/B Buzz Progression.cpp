#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, n;
    cin >> x >> n;
    int sum=0;
    for(int i=1; i<=n; i++){
            sum+=x;
        if(i%5==0){
          sum-=3;
          x-=2;
        }else x++;


    }
    cout << sum;
}
