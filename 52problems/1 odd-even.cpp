/**
* Input:
* First line there is one integer T (1<=T<=100), the number of test case.
* Next there are T lines.
* Each line has one integer n (0<=n<=2147483647)
*
* Output:
* for each integer print "even" or "odd" based on the integer in separate line.
*/

#include<iostream>
using namespace std;

int main(){
    int T, i, n;
    cin >> T;
    for(i=0; i<T; i++){
        cin >> n;
        if(n%2==0){
            cout << "even" << endl;
        }else{
        cout << "odd"<< endl;}
    }
}
