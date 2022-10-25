#include<iostream>
using namespace std;
int main(){
    int t, k=1, knext=0, counter=0;
    cin >> t;
    int arr[1000];
    while(counter<1000){

        if(k%3==0 || (k%10==3 || k%100==3)){
            k++; continue;
        }
        arr[counter++]=k++;
    }
    for(int i=0; i<t; i++){
        cin >> k;
        cout << arr[k-1] << endl;
    }
}
