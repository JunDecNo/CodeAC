#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    string question[101], answer[101];
    char result[101];
    string m, t;
    for (int i = 0; i < n; i++) {
        cin >> question[i] >> answer[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> m;
        for (int j = 0; j < n; j++) {
            if (m == question[j]) {
                for (int k = 0; k < 4; k++) {
                    cin >> t;
                    if (t == answer[j]) {
                        result[i] = 'A'+k;
                    }
                }
            }
        }
    }
    for(int i=0;i<q;i++){
        cout<<result[i]<<endl;
    }
    return 0;
}