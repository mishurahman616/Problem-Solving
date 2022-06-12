#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b){
    return (a<b);
}
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k*l;
    int totalLemonPiece=c*d;
    int drinksPerFriend=totalDrink/nl;
    int saltPerFriend=p/np;
    int minDrinks=min({drinksPerFriend, totalLemonPiece, saltPerFriend}, compare);
    cout << minDrinks/n;

}
