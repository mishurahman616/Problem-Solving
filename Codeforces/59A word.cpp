#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>> n;
    int fl=0, l, length;
    length=l=n.length()-1;
    int half=ceil((length+1)/2.0);
    int i=0;
    int lowerCounter=0;


         while(i < l){

      if(n[i] >='a' && n[i]<='z' ) {lowerCounter++;}

       if(n[l] >='a' && n[l]<='z' ) {lowerCounter++; }

        i++;
        l--;
        if(lowerCounter>half) break;
    }
    if(i==l && (n[i]>='a' && n[i]<='z'))
        lowerCounter++;

    if(lowerCounter < half) transform(n.begin(), n.end(), n.begin(), ::toupper);
    else transform(n.begin(), n.end(), n.begin(), ::tolower);
    cout << n << endl;

}
