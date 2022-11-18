#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> hashM;
    for (int i = 2; i <= n; i++) {
        int tmp = i;
        for (int j = 2; j <= i; j++) {
            while (tmp % j == 0) {
                if (hashM.count(j) == 0) {
                    hashM.insert(pair<int, int>(j, 1));
                } else {
                    hashM[j]++;
                }
                tmp /= j;
            }
        }
    }
    map<int, int>::iterator iter;
    for (iter = hashM.begin(); iter != hashM.end(); iter++) {
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}