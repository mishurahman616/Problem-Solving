#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
const double pi = 3.1415926535897;

int main() {

  double a, b, c;
  while (cin >> a >> b >> c) {
    double s = (a + b + c) * 0.5;
    double triangleArea = sqrt(s * (s - a) * (s - b) * (s - c));
    double r = sqrt((s - a) * (s - b) * (s - c) / s);
    double incircle = pi * r * r;
    double R = (a * b * c) / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c));
    double excircle = pi * R * R;
    printf("%.4lf %.4lf %.4lf\n", excircle-triangleArea, triangleArea-incircle, incircle);
  }
  return 0;
}
