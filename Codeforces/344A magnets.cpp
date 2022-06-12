#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a, b=0, counter=0;
    while(n--){
        cin>> a;
        if(a != b) counter++;
        b=a;
    }
    cout << counter;
}
