#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l, maxDist=0, maxDist1, maxDist2, tempDist;
    double d;
    cin >> n >> l;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);

    if(n==1){
                 maxDist1= a[0] -0;
        maxDist2= l-a[0];
        if(maxDist1>maxDist2) cout << maxDist1;
        else cout << maxDist2;
    }
    else {
        for(int i=0; i<n-1; i++){
            tempDist = a[i+1] - a[i];
            if(tempDist>maxDist){
                maxDist=tempDist;

            }

        }
        d = (maxDist*1.0)/2;

        maxDist1=a[0]-0;
        maxDist2=l-a[n-1];
        if( d > maxDist1 && d > maxDist2) cout << setprecision(9)<< d;
        else if (maxDist1 > maxDist2) cout << maxDist1;
        else cout << maxDist2;
    }



}
