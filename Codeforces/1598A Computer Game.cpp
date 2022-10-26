#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string grid[2];
        cin >> grid[0] >> grid[1];
        int row=1;
        bool possible=true;
        for(int i=1; i<n; i++){

            if(grid[row][i]=='1'){
                if(row==0){
                    if(grid[1][i]=='1'){
                        possible=false;
                        break;
                    }
                    row=1;
                }else{
                    if(grid[0][i]=='1'){
                        possible=false;
                        break;
                    }
                    row=0;
                }
            }
        }
        if(possible){
            cout << "YES" << endl;
        }else{
        cout << "NO" << endl;
        }
    }

}


/**
Codeforces 1598 A. Computer Game
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Monocarp is playing a computer game. Now he wants to complete the first level of this game.

A level is a rectangular grid of 2 rows and n columns. Monocarp controls a character, which starts in cell (1,1) — at the intersection of the 1-st row and the 1-st column.

Monocarp's character can move from one cell to another in one step if the cells are adjacent by side and/or corner. Formally, it is possible to move from cell (x1,y1) to cell (x2,y2) in one step if |x1−x2|≤1 and |y1−y2|≤1. Obviously, it is prohibited to go outside the grid.

There are traps in some cells. If Monocarp's character finds himself in such a cell, he dies, and the game ends.

To complete a level, Monocarp's character should reach cell (2,n) — at the intersection of row 2 and column n.

Help Monocarp determine if it is possible to complete the level.

Input
The first line contains a single integer t (1≤t≤100) — the number of test cases. Then the test cases follow. Each test case consists of three lines.

The first line contains a single integer n (3≤n≤100) — the number of columns.

The next two lines describe the level. The i-th of these lines describes the i-th line of the level — the line consists of the characters '0' and '1'. The character '0' corresponds to a safe cell, the character '1' corresponds to a trap cell.

Additional constraint on the input: cells (1,1) and (2,n) are safe.

Output
For each test case, output YES if it is possible to complete the level, and NO otherwise.

Example
input
4
3
000
000
4
0011
1100
4
0111
1110
6
010101
101010
output
YES
YES
NO
YES
Note
Consider the example from the statement.

In the first test case, one of the possible paths is (1,1)→(2,2)→(2,3).

In the second test case, one of the possible paths is (1,1)→(1,2)→(2,3)→(2,4).

In the fourth test case, one of the possible paths is (1,1)→(2,2)→(1,3)→(2,4)→(1,5)→(2,6).

*/
