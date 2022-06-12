#include<bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    int N,K,p;
    string text;
    char c;
    map<char,int> m;
    cin>>N;
    while(N--){
        m.clear();
        cin>>K;
        for(int i=0;i<K;i++){
            cin>>c;
            cin>>p;
            m[c]=p;
        }
        cin>>K;
        double total=0;
        for(int i=0;i<K;i++){
            getline(cin,text);
            for(int j=0;j<text.length();j++){
                if(m.find(text[j])!=m.end()){
                        total+=m[text[j]];
                }
            }
        }
        cout << fixed << setprecision(2) << total;

    }
    return 0;
}
