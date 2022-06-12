#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    string s;
    int c;
    map<string, int> dbase;
    map<string, int>::iterator it;
    for(int i=0; i<n; i++){
        cin >> s;
        c=0;
      it = dbase.find(s);
        if(it == dbase.end()){
            dbase.insert(pair<string, int>(s, c));
            cout << "OK" << endl;
        }
        else {
            c=it -> second;
            dbase[s]=c+1;
            cout << s << c+1 << endl;;
        }
    }

}
