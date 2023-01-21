#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int limit;
    cin >> s;
    cin >> limit;
    bool visited[26];
    for(int i=0; i<26; i++){
        visited[i]=false;
    }
    if(limit>s.length()){
        cout << "impossible"<<endl;
    }else{
        int counter=0;
            for(int i=0; i<s.length(); i++){
            visited[s[i]-'a']=true;
        }

        for(int k=0; k<26; k++){
            if(visited[k]==true){
                counter++;
            }

        }
        if(counter>=limit) cout << 0<<endl;
        else cout<<limit-counter<<endl;
    }

}
