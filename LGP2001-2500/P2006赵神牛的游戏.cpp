#include <iostream>
using namespace std;
int main() {
    int k, m, n;
    int a, b;
    bool flag=false;
    cin >> k >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        if ((a==0&&b!=0)||k / a * b >= n){
            cout << (i + 1) << " ";
            flag=true;
        }
            
    }
    if(!flag)cout<<"-1";
    return 0;
}