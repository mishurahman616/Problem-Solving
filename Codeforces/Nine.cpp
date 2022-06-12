#include<bits\stdc++.h>
using namespace std;
int n, m;
double F(int x) { return (double)x / m; }
int main() {
  int c = 1;
  while (scanf("%d", &n) == 1) {
    if (n == -1) break;
    scanf("%d", &m);
    double DP[105][105] = { 0 };
    DP[1][1] = 1;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (i == 1 && j == 1)  continue;
        DP[i][j] = DP[i - 1][j] * F(j) + DP[i - 1][j - 1] * F(m - j + 1);
      }
    }
    printf("Case %d: %.7lf\n", c++, 1 - DP[n][m]);
  }
  return 0;
}
