#include<bits/stdc++.h>
using namespace std;
int l[3000000];
int cycle(int n){
    if(n==1) return 1;
    if(l[n] == -1) {
    if(n%2==0) l[n]=1+cycle(n/2);
    else l[n]=1+cycle(3*n+1);
    }
    return l[n];
}
int main()
{
    memset(l, -1, sizeof(l));
    priority_queue<int> pq;
    int x, y;
    while(cin>> x >> y){
            pq=priority_queue<int>();
        for(int i=x; i<=y; i++){
            pq.push(cycle(i));
        }
    cout << x << " "<< y<<" " << pq.top() << endl;

    }

}
