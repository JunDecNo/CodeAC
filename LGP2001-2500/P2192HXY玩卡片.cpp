#include <iostream>
using namespace std;
int main() {
    int n, f = 0, z = 0;
    cin >> n;
    int *l = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        if (l[i] == 5)
            f++;
        else
            z++;
    }
    int loop = f / 9;
    if (loop == 0 && z == 0)
        cout << "-1";
    else if (loop == 0 && z != 0)
        cout << "0";
    else {
        for (int i = 0; i < loop; i++) {
            cout << "555555555";
        }
        for (int i = 0; i < z; i++) {
            cout << "0";
        }
    }

    return 0;
}