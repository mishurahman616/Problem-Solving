#include<iostream>
using namespace std;

int findMinimumBacteria(int x){
    if(x==1) return 1;
    if(x==0) return 0;
    int y=1;
    while(y<=x){
        y*=2;
        cout << "y = " << y << endl;
    }
    return 1+findMinimumBacteria(x-y/2);
}
int main(){
    int x;
    cin >> x;
    int z = findMinimumBacteria(x);
    cout << z;
}

/*

A. Raising Bacteria
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are a lover of bacteria. You want to raise some bacteria in a box.

Initially, the box is empty. Each morning, you can put any number of bacteria into the box. And each night, every bacterium in the box will split into two bacteria. You hope to see exactly x bacteria in the box at some moment.

What is the minimum number of bacteria you need to put into the box across those days?

Input
The only line containing one integer x (1 ≤ x ≤ 109).

Output
The only line containing one integer: the answer.


*/
