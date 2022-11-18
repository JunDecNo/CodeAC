#include <algorithm>
#include <iostream>
using namespace std;
int n;
int getPrice(int cnt, int price) {
    return (n / cnt) * cnt == n ? n / cnt * price : (n / cnt + 1) * price;
}

int main() {
    cin >> n;
    int cnt[3], prc[3];
    for (int i = 0; i < 3; i++) {
        cin >> cnt[i] >> prc[i];
    }
    cout << min({getPrice(cnt[0], prc[0]), getPrice(cnt[1], prc[1]), getPrice(cnt[2], prc[2])}) << endl;
    return 0;
}