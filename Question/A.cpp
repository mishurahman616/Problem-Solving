#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[50001];
    cin>>t;
    while(t--){
        cin>>n;
        for(long long i=1; i<=n; i++){
            cin>>a[i];
        }
        long long side1 = 0,side2 = 0,side3 = 0, sum = 0;
        bool possible = false;
        sum = a[1]+a[2];
        side1 = 1,side2 = 2;
        for(long long i=3; i<=n; i++){
            if(a[i] >= sum){
                side3 = i;
                possible = true;
                break;
            }
        }
        if(possible){
            cout<<side1<<" "<<side2<<" "<<side3<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
