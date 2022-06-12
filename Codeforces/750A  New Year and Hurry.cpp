#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int rem = 240;
   int counter=0, i=1;

   while(k+(i*5) <= rem){
        counter++;
        k+=(i*5);
        if(i >= n) break;
        i++;
    }
cout << counter;


}
