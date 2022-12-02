#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long int res = 0;
        int flag = 0;
        if(x==INT_MAX||x==INT_MIN)return 0;
        if (x < 0) {
            flag = 1;
            x = -x;
        } else
            flag = -1;
        while (x > 0) {
            res = res * 10 + x % 10;
            x /= 10;
        }
        if(res>INT_MAX||res<INT_MIN)return 0;
        else return (-1) * flag * res;
    }
};
int main() {
    return 0;
}