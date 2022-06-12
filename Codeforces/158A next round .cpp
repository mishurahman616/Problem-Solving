#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, m, r, c;

    cin>> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    r=k;
    m=k-1;
    if(arr[m]==0){
            c=0;
        while(m >=0)
        {
            m--;
            c++;
            if(arr[m]>0)
                break;
        }
         cout << r-c;
    }
    else if (m==n-1){
        cout << k;
    }
    else if(arr[m]==arr[m+1]){
        c=0;
        while(m<n-1){

            if(arr[m] != arr[m+1]) break;
             c++;
            m++;
        }
        cout << r+c;
    }
    else cout << r;
}
