#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int weight100=0;
    int weight50=0;
    int weight;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> weight;
        if(weight==50) weight50++;
        else weight100++;

    }

    if(weight100>=weight50) cout << weight100;
    else {
            int more50=weight50-weight100;
       cout << (weight100+more50/3+((more50%3)>0?1:0));
    }
}
