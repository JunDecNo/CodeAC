#include <algorithm>
#include <iostream>
using namespace std;
const int fac[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
int main() {
    int n, cnt = 0, idx = 0;
    cin >> n;
    int str[10];
    for (int i = 0; i < n; i++) cin >> str[i];
    if (prev_permutation(str, str + n)) {
        for (int i = 0; i < n; i++) cout << str[i] << " ";
    } else
        cout << "ERROR";
    
    return 0;
}