#include<bits/stdc++.h>
using namespace std;
int main(){
    int l, c=1;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    l=s.length();
  for(int i=1; i<l; i++){
    if(s[i]!=s[i-1])
        c++;
  }
  if(c%2==0){
    cout << "CHAT WITH HER!";
  }
  else cout << "IGNORE HIM!";
}
