#include <iostream>
using namespace std;
int main() {
    int n, m, x, y;
    int x1, y1, x2, y2, x3, y3;
    int arr[101][101] = {0}, last[101][101] = {0};
    cin >> n >> m >> x >> y;
    for (int i = 1; i <= x; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int p = x1; p <= x2; p++) {
            for (int q = y1; q <= y2; q++) {
                arr[p][q]++;
                last[p][q] = i;
            }
        }
    }
    for (int i = 0; i < y; i++) {
        cin >> x3 >> y3;
        if (arr[x3][y3] != 0) {
            printf("Y %d %d\n", arr[x3][y3], last[x3][y3]);
        } else {
            printf("N\n");
        }
    }
    return 0;
}