#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, m, r;
    int x, y;
    cin >> n >> m >> r;
    double dis;
    int arr[101][101] = {0};
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        arr[x][y] = 1;
        for (int i = 1; i <= n; i++) {  //开始枚举各个点
            for (int j = 1; j <= n; j++) {
                dis = sqrt((x - i) * (x - i) + (y - j) * (y - j));  //两点之间的距离公式！！初中就学到了，应该都会吧。
                if (dis <= r)                                       //到这里的距离小于扫射的距离
                    arr[i][j] = 1;                                  //那么就标记
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[i][j])
                res++;
        }
    }
    cout << res;
    return 0;
}