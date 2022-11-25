#include<bits/stdc++.h>
using namespace std;
int main(){


// Solution to the codeforces problem - 703A-Mishka and Game
int n ;
int mishka = 0, chris = 0, dm, dc;
cin >> n;
for(int i = 0; i < n; i++)
{
    cin >> dm >> dc;
    if (dm > dc)
    {
        mishka++;
    }else if (dm < dc)
    {
        chris++;
    }
}
if (mishka > chris)
{
    cout << "Mishka" << endl;
}else if(chris > mishka)
{
    cout << "Chris" << endl;
}
else
{
    cout << "Friendship is magic!^^"<< endl;
}

}
