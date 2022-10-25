/**
* Input:
* First line there is one integer T (1<=T<=100), the number of test case.
* Next there are T lines.
* Each line has one non negative integer. (max 100 digit in each integer).
*
* Output:
* for each integer print "even" or "odd" based on the integer in separate line.
*/

#include<iostream>
using namespace std;

int main(){
    int T, i;
   string n;
    cin >> T;
    for(i=0; i<T; i++){
        cin >> n;
        int x=n.length();
        char y=n[x-1];
        if((y-48)%2==0){
            cout << "even" << endl;
        }else{
            cout << "odd" << endl;
        }

    }
}

