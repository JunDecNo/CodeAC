#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++)  //平方数要小于等于n
    {
        cout << i * i << " ";  //平方数
    }
    return 0;
}