#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x=0;
    string sm("++X");
    string sm1("X++");
    string s;
cin>>n;
    while(n--){
        cin>> s;
        if((s.compare(sm)==0)||(s.compare(sm1)==0)) ++x;
        else --x;
    }
    cout << x ;

}
