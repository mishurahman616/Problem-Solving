#include<bits/stdc++.h>
using namespace std;

long int cycle(long int n){
  long int i=0;
  while(true){
        i++;
    if(n==1)
        break;
    if(n%2==0) n/=2;
    else n=(3*n)+1;

  }
 return i;
}
int main()
{
    long int x, y,j, m=0;
    while(cin>> x >> y){
        m=0;
        if(x>y){
            long int temp=y;
            y=x;
            x=temp;
        }
        for(long int i=x; i<=y; i++){
             j=cycle(i);
          if(m<j) m=j;
        }
    cout << x << " "<< y<<" " << m << endl;

    }
    return 0;

}
