#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4], d, counter=0, temp;
    cin>> a[0] >> a[1] >> a[2] >> a[3] >> d;
    sort(a, a+4);
    bool arr[d+1]={false};
    for(int i=0; i<=3; i++){
        if(arr[a[i]]==false){
                temp=a[i];
            for(int j=arr[temp]; j<= d; j+=temp){
                arr[j]=true;
            }
        }
    }
    for(int i=1; i<=d; i++){
        if(arr[i]==true) counter++;
    }
    cout << counter;

}
