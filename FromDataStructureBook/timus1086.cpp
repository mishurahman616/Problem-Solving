#include<bits/stdc++.h>
using namespace std;
int dp[15000];
int c=0, num=3;
int prime(int n){
    dp[0]=2;
    if(dp[n]!=-1) return dp[n];
    for(num; c<=n; num+=2){
        for(int i=0; i<=c; i++){
            if(num%dp[i]==0) break;
            if(i==c) {dp[++c]=num; break;}
        }
    }

     return dp[n];

}
int main(){
    memset(dp, -1, sizeof(dp));
    int k, n;
    scanf("%d", &k);
    for(int i=0; i<k; i++)
    {
        scanf("%d", &n);
        printf("%d\n", prime(n-1));
    }
}
