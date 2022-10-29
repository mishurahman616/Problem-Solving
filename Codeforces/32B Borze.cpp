#include<iostream>
using namespace std;
int main(){

string borzeCode;
cin >> borzeCode;
int length = borzeCode.size();
for(int i=0; i<length; i++)
{
    if(borzeCode[i] == '-')
    {
        if (borzeCode[i+1] == '-')
        {
            cout << 2;
            i++;
        }
        else if(borzeCode[i+1] == '.')
        {
            cout << 1;
            i++;
        }
    }
    else
    {
        cout << 0;

    }
}

}

/**

Code forces 32 B. Borze Solved
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as �.�, 1 as �-.� and 2 as �--�. You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.

Examples
input
.-.--
output
012
input
--.
output
20
input
-..-.--
output
1012


*/
