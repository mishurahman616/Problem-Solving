#include<iostream>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
    vector<int> arr;
    unsigned long long x;
    double r;
    while(cin >> x){
        arr.push_back(x);
    }

    for(auto i=arr.rbegin(); i != arr.rend(); i++){
    cout << fixed << setprecision(4)<<sqrt(*i) << endl;

    }
}
