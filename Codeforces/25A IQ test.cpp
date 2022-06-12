#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, c, counter=0;
    cin >> n;
    cin>> a >> b >> c;
    if(a%2==0) counter++;
    if(b%2==0) counter++;
    if(c%2==0) counter++;
    if(counter>=2){
        if(a%2 !=0) cout << 1;
        else if (b%2!=0) cout << 2;
        else if (c%2!=0) cout << 3;
        else
            for(int i=4; i<=n; i++){
                    cin>> c;
                if(c%2!=0) {cout << i;
                break;
                }
            }
    }

    else{
         if(a%2 ==0) cout << 1;
        else if (b%2==0) cout << 2;
        else if (c%2==0) cout << 3;
        else
            for(int i=4; i<=n; i++){
                     cin>> c;
                if(c%2==0) {cout << i;
                break;}
            }
    }
}
