#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, p, q, counter=0;
    cin >> n;
    bool arr[n+1]={false};
    cin >> p;
    int a;
    for(int i=0; i<p; i++){
        cin >> a;
            arr[a]=true;
            counter++;

    }
    cin >> q;
     for(int i=0; i<q; i++){
        cin >> a;
            if(arr[a]==false)
                counter++;

    }

    if(counter==n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}
