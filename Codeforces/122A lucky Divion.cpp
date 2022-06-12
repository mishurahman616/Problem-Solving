#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, flag=0;
   cin>> n;
   if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0)
        cout << "YES";
    else {
        stringstream ss;
    ss<<n;
    string s = ss.str();
        int l=s.length();
        for(int i=0; i<l; i++){
            if(s[i] =='4' || s[i] == '7'){
                flag=1;
            }
            else{
                flag=0;
                break;
            }

        }
        if(flag)  cout << "YES";
        else cout << "NO";
    }
   }



