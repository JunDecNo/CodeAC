#include <iostream>
using namespace std;

int YueAdd(int num) {
    int res = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            res += i;
    }
    return res;
}

int main() {
    int number;
    cin >> number;
    for (int i = number;; i++) {
        int tmp = YueAdd(i);
        if(i == YueAdd(tmp)&& i!= tmp){
            cout<<i<<" "<<tmp;
            break;
        }
    }
    return 0;
}