#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x){
    if(r==l){
        if(arr[r]<=x) return r;

        return -1;
    }
    if(r>l){
        int mid=l+(r-l)/2;
        if(arr[mid]<=x && arr[mid+1]>x)
            return mid;
        if(arr[mid]>x){
            return binarySearch(arr, l, mid-1, x);
        }
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}
int main(){
   //n=number of shops in the city , q=number of days want to buy , m=budget in ith day
    int n, q, m;
    int shopIndex=0;
    cin >> n;
    //price  of Beecola drinks ith shop
    int x[n];
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    sort(x, x+n);

    //take input number of days want to buy drinks
    cin >> q;
    for(int i=0; i<q; i++){
        // take input budget of each day;
        cin >> m;
        cout << binarySearch(x, 0, n-1, m)+1 << endl;

    }

}
