#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, pi;
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin >> pi;
        arr[pi]=i;
    }
     for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
}
