#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    string s;
    cin>> n >>t;
    cin>> s;
    while(t--){
        for(int i=1; i<n; i++){
            if(s[i]=='G' ){
                char temp=s[i-1];
                s[i-1]=s[i];
                s[i]=temp;
                i++;

            }
        }

    }
    cout << s;
}
