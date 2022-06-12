#include<bits/stdc++.h>
using namespace std;
char seq[11];
int index=0, zero=-1;

char findDigit(int K){
        for(index; index<=K; index=1+zero){
            seq+="1";
            zero++;
        ;


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
