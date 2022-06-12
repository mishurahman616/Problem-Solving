#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        c=a%b;

        if(c)  cout << b-c << endl;
        else cout << c << endl;
    }
}
