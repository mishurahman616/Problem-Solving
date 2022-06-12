#include<bits/stdc++.h>
using namespace std;
int main(){
    long s1;
    set<long> s;
    for(int i=0; i<4; i++ ){
        cin >> s1;
        s.insert(s1);
    }
    cout << 4-s.size();
}
