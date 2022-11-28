#include <iostream>
using namespace std;
int main() {
    int x, y, n,total;
    cin >> x >> y >> n;
    int x1, y1, x2, y2;
    bool b[241][241];
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i1=x1;i1<=x2;i1++)
            for (int j1=y1;j1<=y2;j1++) //二重循环,模拟犁田
                if (!b[i1][j1]) //如果当前格子没被犁过
                {
                    total++; //累加计数器
                    b[i1][j1]=1; 
                }
    }
    cout<<total;
    return 0;
}