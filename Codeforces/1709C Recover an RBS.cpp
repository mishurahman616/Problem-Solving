#include<bits/stdc++.h>
using namespace std;
bool is_RBS(string s){
    long long int l=s.length();
    long long int prefix=0;
    for(int i=0; i<l; i++){
        if(s[i]=='('){
            prefix++;
        }else{
            prefix--;
        }
        if(prefix<0) return false;
    }
    if(prefix !=0) return false;
    return true;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int open=0, close=0, ques=0;
        int l=s.length();
        for(int i=0; i<l; i++){
            if(s[i]=='(') open++;
            else if(s[i]==')') close++;
            else ques++;
        }
        int reqOpen=(l/2)-open;
        int reqClose=(l/2)-close;
        if(reqOpen==0 || reqClose==0){
            cout << "YES"<< endl;
            continue;
        }
        string reqQuesSequence=string(reqOpen-1, '(')+string(1, ')')+string(1, '(')+string(reqClose-1, ')');
        for(int i=0, j=0; i<l; i++){
            if(s[i]=='?'){
                s[i]=reqQuesSequence[j];
                j++;
            }
        }
        if(is_RBS(s)==true){
            cout << "NO" << endl;
        }else{
            cout << "YES"<< endl;
        }
    }

}
