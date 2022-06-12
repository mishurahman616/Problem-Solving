#include<bits/stdc++.h>
using namespace std;
int main(){
    double N, K;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &K);
        double s= (double)sqrt((double)8*K-7);
        long long int s1=s;
        if(s==s1) printf("1 ");
        else printf("0 ");

    }

}
