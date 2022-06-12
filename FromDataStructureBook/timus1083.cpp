#include<bits/stdc++.h>
using namespace std;
int main(){
int n, k, i;
string marks;
cin>> n;
cin>> marks;
k=marks.length();
int fact=n;
    for(i=k; fact-i>0; i+=k){
        n*=(fact-i);
    }
cout << n << endl;
}
