#include <iostream>
using namespace std;
int main() {
  int m, n, a[10] = {0}, idx;
  cin >> m >> n;
  for (int i = m; i <= n; i++) {
    idx = i;
    while (idx > 0) {
      a[idx % 10]++;
      idx /= 10;
    }
  }
  for (int i = 0; i < 10; i++) cout << a[i] << " ";

  return 0;
}