#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    int arr[4];
    cin>> n;

    while(true){
              n++;
            temp=n;
          for(int i=0; i<4; i++){
        arr[i]=temp%10;
        temp/=10;

    }
    if(arr[0] != arr[1] && arr[0] != arr[2] && arr[0]!= arr[3] && arr[1] != arr[2] && arr[1] != arr[3] && arr[2] != arr[3]) break;
    }

    cout << n;

}
