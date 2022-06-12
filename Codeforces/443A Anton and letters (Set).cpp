#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    set<char> distinct;
    while(a != '}'){
            cin>> a;
            if(a==',')continue;
        distinct.insert(a);
    }
    cout << distinct.size()-2;
}
