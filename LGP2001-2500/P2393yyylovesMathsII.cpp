#include <iostream>
using namespace std;
int main() {
    long double x;
    long double res = 0;
    while (scanf("%Lf", &x) != EOF) {
        res += x * 1000000;
    }
    printf("%.5Lf", res / 1000000);
    return 0;
}