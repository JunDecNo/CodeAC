#include <iostream>
#include <string>
using namespace std;
int main() {
    char n;
    string num;
    cin >> n >> num;
    int len = num.length();
    printf("%c*%c^%d", num[0], n, len - 1);
    for (int i = 1; i < len; i++) {
        if (num[i] != '0')
            printf("+%c*%c^%d", num[i], n, len - i - 1);
    }

    return 0;
}