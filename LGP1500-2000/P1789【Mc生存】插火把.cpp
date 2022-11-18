#include <iostream>
using namespace std;
int main() {
    int n, m, k, cnt = 0;
    int arr[101][101] = {0};
    int x0, y0;
    cin>>n>>m>>k;
    for (int i = 0; i < m; i++) {
        cin >> x0 >> y0;
        for (int j = -2; j <= 2; j++) {
            arr[x0 + j][y0] = 1;
            arr[x0][y0 + j] = 1;
        }
        arr[x0-1][y0-1]=1;
        arr[x0-1][y0+1]=1;
        arr[x0+1][y0-1]=1;
        arr[x0+1][y0+1]=1;
    }
    for (int i = 0; i < k; i++) {
        cin >> x0 >> y0;
        for (int j = -2; j <= 2; j++) {
            for (int k = -2; k <= 2; k++) {
                arr[x0 + j][y0 + k] = 1;
                arr[x0 + k][y0 + j] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[i][j] == 0)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}