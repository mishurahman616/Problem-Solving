#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, toggle=1;
    cin>>n;
    cout << "I hate ";
    n=n-1;
    while(n--){
        if(toggle){
            cout << "that I love ";
            toggle=0;
        }
        else {
            cout << "that I hate ";
            toggle =1;
        }
    }
    cout << "it";
}
