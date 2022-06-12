#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, s1;
    cin>> s;
    int l=s.length();
    sort(s.begin(), s.end());
   int l1=(l-1)/2;
    int i=0;
if(l1>0){
    while(l1++){
        s1.append(s, l1-1, 1);
        if(l1==l)
            break;
        s1.append(s, i, 1);
        i++;
  }
   cout << s1;
}
else cout << s[0];


}
