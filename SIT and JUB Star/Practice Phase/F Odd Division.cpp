#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cin >> s;
    int counter=0;
    int l = s.size();
    bool zerofound=false;
    bool evenfound=false;
    if((s[l-1]-'0')%2==0 || s[0]=='0'){
        cout << -1;
    }else{
        for(int i=0; i<l; i++){

               if(s[i]=='0' && ((s[i-1]-'0')%2!=0)){
                counter--;
               }else if((s[i]-'0')%2==0){
                   continue;
               }else counter++;

        }
        cout << counter;
    }

}

