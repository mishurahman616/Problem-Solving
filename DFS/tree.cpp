#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="<<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<<<<<<<<<<<<<<<>>>>>><<<<<<<<";
  // string s="< <<>> <<>> ><<<<<<>>>>";
    int maxCount=0;
    int current=0;
    int newmax=0;int label[10000];

    int n=s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='<'){
            current++;

        }else if(s[i]=='>'){
            //current--;

        }
    }
    cout << n << endl;

    cout << maxCount << endl;
    cout << current;


}
