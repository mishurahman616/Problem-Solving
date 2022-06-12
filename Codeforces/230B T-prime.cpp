#include<bits/stdc++.h>
using namespace std;
// if root of a given number is prime then the number will have exactly three divisor;
int main(){
    int n;
    cin >> n;
    long long int x, i, j;
    int maxX=1000000; // maxX is the root of maximum X.
    double root;
    bool dp[maxX+1];
    memset(dp, true, sizeof(dp));
    dp[0] = dp[1]=false;
    for( i=2; i*i<=maxX; i++){
        if(dp[i]==true){
            for(j=i*i; j<=maxX; j+=i)
                dp[j]=false;
        }
    }


    for(int i=0; i<n; i++){
        cin >> x;
        root = sqrt(x);
        if(root == int (root)){
            if(dp[(int) root])
                cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";

    }

}
