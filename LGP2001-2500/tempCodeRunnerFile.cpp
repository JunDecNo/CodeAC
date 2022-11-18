#include <iostream>
using namespace std;
int main() {
    int n, z = 0;
    int arr[1000][1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
                z = 1;
        }
    }
    if (z == 0)
        cout << "Bad Game!" << endl;
    else {
        int max = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 0) {
                    int tmp = 0;
                    for (int p = 0; p < n; p++) tmp += arr[i][p] + arr[p][j];
                    if (tmp > max)
                        max = tmp;
                }
            }
        }
        cout << max;
    }
    return 0;
}