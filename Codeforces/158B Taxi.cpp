#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, si, car1=0, car2=0, car3=0, car4=0, carCount=0;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> si;
       switch(si){
        case 1: car1++;
         break;
        case 2: car2++;
        break;
        case 3: car3++;
        break;
        case 4: car4++;
        break;
       }
    }
    if(car1>car3){
        car2= (2*car2+(car1-car3));
    }
    else car2= 2 * car2;

    carCount=car4+car3+ ceil(car2/(4*1.0));
    cout << carCount;
}

