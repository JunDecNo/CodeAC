#include <cmath>
#include <iostream>
using namespace std;
double dist(int x1, int y1, int x2, int y2) {  //求距离的函数
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));  //公式
}
int main() {
  int x[50], y[50], r[50], n, t = 0;
  int x1, y1, x2, y2;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> x[i];
  for (int i = 0; i < n; i++) cin >> y[i];
  for (int i = 0; i < n; i++) cin >> r[i];
  cin >> x1 >> y1 >> x2 >> y2;
  for (int i = 0; i < n; i++) 
    if ((dist(x1, y1, x[i], y[i]) < r[i]) ^ (dist(x2, y2, x[i], y[i])) < r[i])
      t++; 
  cout << t << endl;
  return 0;
}