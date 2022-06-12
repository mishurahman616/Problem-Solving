#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    bool distinct[100]= {false};
    int counter=0;
    int n;
    string s;
    cin>> n;
    cin>>s;
    if(n>25)
    {
        for(int i=0; i<n; i++)
        {
            a=s[i];
            (a-97) >=0 ? distinct[a-97]=true : distinct[a-65]=true ;


        }

        for(int i=0; i<26; i++)
        {
            if (distinct[i]==true) counter++;
        }
        if (counter == 26) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";

}
