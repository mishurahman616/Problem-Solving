#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> col(n);

    for(int i=0; i<n; i++){
        cin >> col[i];
    }
    vector <long long> leftToRight(n, 0);
    vector <long long> rightToLeft(n, 0);
    for(int i=1; i<n; i++){
        if(col[i]<col[i-1]){
            leftToRight[i]=leftToRight[i-1]+(col[i-1]-col[i]);
        }else{
            leftToRight[i]=leftToRight[i-1];
        }
    }
    for(int i=n-2; i>=0; i--){
        if(col[i]<col[i+1]){
            rightToLeft[i]=rightToLeft[i+1]+(col[i+1]-col[i]);
        }else{
            rightToLeft[i]=rightToLeft[i+1];
        }
    }

    for(int i=0; i<m; i++){
        int s, t;
        cin >> s>>t;
        if(s<t){
            cout << leftToRight[t-1]-leftToRight[s-1] << endl;
        }else{
            cout << rightToLeft[t-1]-rightToLeft[s-1] << endl;
        }
    }

}
