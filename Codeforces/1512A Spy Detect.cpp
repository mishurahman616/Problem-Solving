#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, i, j, k, a;

    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> i >> j >> k;
        if(j==k && i!=j)
        {
            cout << 1 << "\n";
            for(m=3; m<n; m++)
            {
                cin >> a;

            }
        }
        else if (i==k && j!=i)
        {
            cout << 2 << "\n";
            for(m=3; m<n; m++)
            {
                cin >> a;

            }

        }
        else if(i==j && k!=i)
        {
            cout << 3 << "\n";
            for(m=3; m<n; m++)
            {
                cin >> a;

            }

        }
        else
        {
            for(m=3; m<n; m++)
            {
                cin >> a;
                if(i!=a)
                {
                    cout << m+1 << "\n";
                }
            }
        }

    }

}
