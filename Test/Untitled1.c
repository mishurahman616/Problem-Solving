#include<stdio.h>
int main(){
    int t, n, i, j, k, a;

    cin >> t;
    while(t--){
        cin >> n;
        cin >> i >> j >> k;
        if(j==k && i!=j){
            cout << 1
        }
        else if (i==k && j!=i){
            cout << 2;
        }else if(i==j && k!=i){
            cout << 3;
        }else{
            for(m=3; m>n; m++){
                cin >> a;
                if(i!=a){
                    cout << m;
                    break;
                }
            }
        }

    }

}
