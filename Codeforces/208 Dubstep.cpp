#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, s2="WUB", inital;
    cin>> s;
size_t pos=s.find(s2);
   while(pos < string::npos){
    s.replace(pos, 3, " ");
    pos=s.find(s2);
   }

   int l = s.length();
   int j=0; /* a variable to check first occurence of char */
   for(int i=0; i<l-1; i++){
    if( j == 0 && s[i]==' '){

        continue;
    }
    else if (s[i]==' ' && s[i+1] == ' ' ){

        continue;
    }
    else{
            j=1;
        cout << s[i];
    }
   }
    if(s[l-1]!=' ') cout << s[l-1];
}
