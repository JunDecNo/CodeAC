#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string str;
    cin >> n >> str;
    for (int i = 0; i < str.size(); i++) {
        str[i] = ((int)(str[i] - 'a') + n) % 26 + 'a';
    }
    cout << str << endl;
    return 0;
}