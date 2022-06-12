#include<bits/stdc++.h>
using namespace std;
string seq;
int length=0, sum=0, zero=0;

char findDigit(int K){
    seq[0]='1';
    if(K<=length) return seq[K];
        for(length; length<=K; ){
            seq[++length]='1';
            zero++;
        for(int j=1; j<=zero; j++){
            seq[++length]='0';
        }


    }
    return seq[K];


}

int main(){
    int N, K;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &K);
        cout << findDigit(K-1) << " ";

    }
}



/*
#include<bits/stdc++.h>
using namespace std;
string seq;
int index=0, zero=-1;

char findDigit(int K){
        for(index; index<=K; ){
            seq+="1";
            zero++;
        for(int j=1; j<=zero; j++){
            seq+="0";
        }
        index=1+zero;


    }
    return seq[K];


}

int main(){
    int N, K;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &K);
        cout << findDigit(K-1) << " ";

    }
}
*/
