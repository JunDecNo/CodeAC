#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int n, lv = 0, e = 0;
    double hp = 10;
    double x, exp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> exp;
        hp -= x;
        if (hp > 10)
            hp = 10;
        else if (hp <= 0)
            break;
        e += exp;
    }
    while (1) {
        if (e >= pow(2, lv)) {
            e -= pow(2, lv);
            lv++;
        } else break;
    }
    printf("%d %d", lv, e);
    return 0;
}