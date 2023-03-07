#include <bits/stdc++.h>
using namespace std;
#define qwq return 0;
#define QAQ int main()
int ts[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    int m, r, s = 0;
    char t;
    cin >> m >> t >> r;
    if (m > 12) {
        if (m / 10 == 1) {
            m = 12;
        } else {
            if (m % 10 == 2) {
                m = 12;
            } else {
                m = (m - 1) % 10 + 1;
            }
        }
        s++;
    }
    if (ts[m] < r || r <= 0) {
        s++;
    }
    cout << s;
    return 0;
}