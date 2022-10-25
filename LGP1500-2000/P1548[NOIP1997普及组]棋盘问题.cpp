#include <iostream>
using namespace std;
int main() {
  int n, m, min;
  int square = 0, rect = 0;
  cin >> n >> m;
  n > m ? min = m : min = n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      rect += m - j + n - i;
      if (min == n) {
        for (int k = i + 1; k <= n; k++) {
          if (m - j + 1 < k - i + 1)
            rect += m - j;
          else
            rect += m - j - 1;
        }
      } else {
        for (int k = j + 1; k <= m; k++) {
          if (n - i + 1 < k - j + 1)
            rect += n - i;
          else
            rect += n - i - 1;
        }
      }
      if (m - j + 1 < min || n - i + 1 < min) {
        if (m - j < n - i) {
          square += m - j + 1;
        } else {
          square += n - i + 1;
        }
      } else {
        square += min;
      }
    }
  }
  printf("%d %d", square, rect);
  return 0;
}