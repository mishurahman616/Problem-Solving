#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, b;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> a >> b;
        if( n==1 || n==2 || n==3 ){
            if(a==n&&b==n){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }else{
            if(a==n && b==n){
                cout << "Yes" <<endl;
            }else if((a+b)<=(n-2)){
                cout << "Yes" <<endl;
            }else{
                cout << "No" <<endl;
            }
        }
    }
}
