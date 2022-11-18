#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int cnt = 0;
    getline(cin, str);
    for (char s : str) {
        if (s == ' ')
            cnt ++;
        if (s >= 'p' && s <= 's')
            cnt += (int)(s - 'p') + 1;
        if (s >= 't' && s <= 'v')
            cnt += (int)(s - 't') + 1;
        if (s >= 'w' && s <= 'z')
            cnt += (int)(s - 'w') + 1;
        if (s >= 'a' && s <= 'o')
            cnt += (int)(s - 'a') % 3 + 1;
    }
    cout << cnt << endl;
    return 0;
}