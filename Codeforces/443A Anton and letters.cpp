#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    bool distinct[26]={false};
    int counter=0;
    cin>> a; // opening curly bracket remover
    while(true){
        cin>> a;
        if( a=='}') break;
        distinct[a-97]=true;

    }
   for(int i=0; i<26; i++){
    if (distinct[i]==true) counter++;
   }
    cout << counter;
}
