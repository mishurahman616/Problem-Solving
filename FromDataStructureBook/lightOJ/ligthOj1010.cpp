#include<bits/stdc++.h>
using namespace std;
int board[200][200];
int main (){
    int T, m, n, c=0;
    cin>>T;
    while(T--){
        cin>>m>>n;
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                board[i][j]==-1;
            }
        }
        board[0][0]=1;
        c++;
        board[i+1][j+2]=1;
        board[i+2][j+1]=1;
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(i==0 && j<2){
                    if(board[i][j]==-1){}
                    c++;
                    board[i][j]=1;
                }
                else if(i==0 && j>1){
                    board[i][j]
                }

            }
        }




    }
}
