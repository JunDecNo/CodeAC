#include <iostream>
using namespace std;
int arr[21][21][21] = {0};
int main() {
    int w, x, h, q;
    int x1, x2, x3, y1, y2, y3;
    int cnt=0;
    cin >> w >> x >> h;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
        for (int a = x1; a <= y1; a++) {
            for (int b = x2; b <= y2; b++) {
                for (int c = x3; c <= y3; c++) {
                    arr[a][b][c] = 1;
                }
            }
        }
    }
    for (int a = 1; a <= w; a++) {
        for (int b = 1; b <= x; b++) {
            for (int c = 1; c <= h; c++) {
                if(arr[a][b][c]==0)cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}