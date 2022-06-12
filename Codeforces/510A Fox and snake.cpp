#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    bool toggle=true, toggle2=true;
    for (int i=0; i<n; i++){
        if(toggle){
            for(int j=0; j<m; j++){
                cout << "#";
            }
            cout << endl;
            toggle=false;
        }
        else {
            toggle =true;
            if(toggle2){
                    toggle2=false;
                for(int j=0; j<m-1; j++){
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else{
                toggle2 = true;
                cout << "#";
                for(int j=1; j<m; j++){
                    cout << ".";
                }
                cout << endl;
            }

        }
    }
}
