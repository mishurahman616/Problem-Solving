#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>> n;
    int fl=0, l=n.length()-1;
    int i=0;
    int counter=0;
    if(l>2){

         while(i<l){

        if(n[i] =='4' || n[i]=='7' ) {counter++;}

       if(n[l] =='4' || n[l]=='7' ) {counter++; }

        i++;
        l--;

    }
    if(i==l && (n[i]=='4' || n[i]=='7'))
        counter++;

    }

    if(counter==4 || counter==7) cout << "YES";
    else cout << "NO";

}
