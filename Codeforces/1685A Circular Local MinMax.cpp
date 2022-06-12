#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i=0; i<n; i++){
           cin >> a[i];
        }
        if(n%2!=0) {
            cout << "NO" << endl;
            continue;
        }

        sort(a, a+n);
        vector<int> v;
        for(int j=0, k=n/2; j<n/2; j++, k++){
           v.push_back(a[j]);
           v.push_back(a[k]);
        }
        int flag=0;
        for(int l=1; l<n-1; l++){
            if(v[l] < v[l-1] && v[l] < v[l+1]) continue;
            else if(v[l] > v[l-1] && v[l] > v[l+1]) continue;
            else {
               flag=1;
               break;
            }
        }
        if(flag){
            cout << "NO" << endl;

        }else{
            cout << "YES" << endl;
            for(int l=0; l<n; l++){
                cout << v[l] <<" ";

            }
            cout << endl;

        }
    }


}
