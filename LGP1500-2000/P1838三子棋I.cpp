#include <iostream>
#include <string>
using namespace std;
int main() {
    int arr[3][3] = {0};
    bool flag = true;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {  //小a是1，uim是-1
        int tmp = str[i];
        tmp -= 48;
        if (flag)
            arr[(tmp - 1) / 3][tmp - ((tmp - 1) / 3) * 3 - 1] = 1;

        else
            arr[(tmp - 1) / 3][tmp - ((tmp - 1) / 3) * 3 - 1] = -1;
        flag = !flag;
    }
    //判断是否正确
    for (int i = 0; i < 3; i++) {  //判断行列
        int a = 0, u = 0;
        for (int j = 0; j < 3; j++) {
            a += arr[i][j];
            u += arr[j][i];
        }
        if (a == 3 || u == 3) {
            cout << "xiaoa wins." << endl;
            return 0;
        } else if (a == -3 || u == -3) {
            cout << "uim wins." << endl;
            return 0;
        }
    }
    int z = arr[0][0] + arr[1][1] + arr[2][2], f = arr[0][2] + arr[1][1] + arr[2][0];
    if (z == 3 || f == 3) {
        cout << "xiaoa wins." << endl;
        return 0;
    } else if (z == -3 || f == -3) {
        cout << "uim wins." << endl;
        return 0;
    }
    cout << "drew." << endl;
    return 0;
}