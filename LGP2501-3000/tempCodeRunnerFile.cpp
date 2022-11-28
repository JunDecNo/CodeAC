#include <iostream>
using namespace std;
char arr[100][100];
int n, m;
bool isExist(int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}
char getNum(int i, int j) {
    int cnt = 0;
    if (isExist(i - 1, j - 1) && arr[i - 1][j - 1] == '*')
        cnt++;
    if (isExist(i - 1, j) && arr[i - 1][j] == '*')
        cnt++;
    if (isExist(i - 1, j + 1) && arr[i - 1][j + 1] == '*')
        cnt++;
    if (isExist(i, j - 1) && arr[i][j - 1] == '*')
        cnt++;
    if (isExist(i, j + 1) && arr[i][j + 1] == '*')
        cnt++;
    if (isExist(i + 1, j - 1) && arr[i + 1][j - 1] == '*')
        cnt++;
    if (isExist(i + 1, j) && arr[i + 1][j] == '*')
        cnt++;
    if (isExist(i + 1, j + 1) && arr[i + 1][j + 1] == '*')
        cnt++;
    return cnt+'0';
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != '*') {
                arr[i][j] = getNum(i, j);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}