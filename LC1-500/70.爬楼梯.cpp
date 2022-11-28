#include <iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int a = 1, b = 2, t;  // a=n-2,b=n-1
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
        else {
            for (int i = 3; i <= n; i++) {
                t = a + b;
                a = b;
                b = t;
            }
            return t;
        }
    }
};
int main() {
    return 0;
}