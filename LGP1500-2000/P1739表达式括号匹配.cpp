#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    char idx;
    stack<char> s;
    string str;
    cin >> str;
    for (char idx : str) {
        if (idx == '@')
            break;
        if (idx == '(') {
            s.push('(');
        }
        if (idx == ')') {
            if (s.empty()) {
                cout << "NO" << endl;
                return 0;
            } else
                s.pop();
        }
    }
    if (s.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}