#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int sum=0;
    if(n>0){
        for(int i=n; i>0; i--)
            sum+=i;
    }
    else
        for(int i=n; i<=1; i++)
            sum+=i;
    cout << sum << endl;
}
