#include <algorithm>
#include <iostream>
using namespace std;
bool isContain(int arr[], int num) {
    for (int i = 0; i < 7; i++) {
        if (arr[i] == num)
            return true;
    }
    return false;
}
int main() {
    int n, Atmp, res[7], tmp, goal[7] = {0};
    cin >> n;
    for (int i = 0; i < 7; i++) cin >> res[i];
    for (int i = 0; i < n; i++) {
        Atmp = 0;
        for (int j = 0; j < 7; j++) {
            cin >> tmp;
            if (isContain(res, tmp)) {
                Atmp++;
            }
        }
        if (Atmp != 0)
            goal[7 - Atmp]++;
    }
    for (int i = 0; i < 7; i++) cout << goal[i]<<" ";
    return 0;
}