#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, maximum=0, minimum=101, maxIndex, minIndex;
    cin>> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a > maximum){
            maximum = a;
            maxIndex = i;
        }
        if(a<=minimum){
            minimum=a;
            minIndex=i;
        }
    }
    if(maxIndex<minIndex)
    cout << maxIndex+(n-minIndex-1);
    else cout << maxIndex+(n-minIndex-2); // when min and max swap then 1 sec will reduce
}
