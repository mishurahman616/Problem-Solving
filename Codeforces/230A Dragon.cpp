#include<bits/stdc++.h>
using namespace std;
int main(){
    int s, n, x, y, flag=0, temp1, temp2;
    cin >> s >> n;
    int xy[n][2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++){
            cin >> xy[i][j];
        }
    }
   for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(xy[i][0]>xy[j][0]){
            temp1=xy[i][0];
            temp2=xy[i][1];
            xy[i][0]=xy[j][0];
            xy[i][1]=xy[j][1];
            xy[j][0]=temp1;
            xy[j][1]=temp2;
        }
    }
   }
    for(int i=0; i<n; i++){
        if(xy[i][0]>=s) {
            cout << "NO";
            flag=1;
            break;
        }
        else s=s+xy[i][1];
    }
    if(flag==0)
    cout << "YES";

}
