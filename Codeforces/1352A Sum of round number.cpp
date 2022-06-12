#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x[5], k;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        k=0;
        for(int m=0, multi=1; m<5; m++, multi *=10)
        {
            x[m]=n%10;
            n/=10;
            if(x[m] !=0)
            {
                k++;
                x[m] *= multi;
            }

        }

        cout << k << endl;
        for(int j=0; j<5; j++)
        {
            if (x[j] !=0)
                cout << x[j] << " ";
        }
        cout << endl;



    }
}





