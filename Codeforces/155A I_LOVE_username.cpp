#include<bits/stdc++.h>
using namespace std;
int main(){
int n, a;
cin >> n;
cin >> a;
int minimum, maximum;
minimum = maximum = a;
int counter=0;


for(int i=1; i<n; i++){
    cin >> a;
    if(a < minimum){
        minimum = a;
        counter++;
    }
    else if ( a > maximum){
        maximum = a;
        counter++;
    }

}
cout << counter;
}
