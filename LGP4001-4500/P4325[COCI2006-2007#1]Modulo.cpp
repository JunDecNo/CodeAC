#include <iostream>
using namespace std;
int main() {
    int a[10];
    int res = 0, x,flag;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        a[i] = x % 42;
    }
    for (int i = 0; i < 10; i++) {
        flag=1;
        for (int j = 0; j < i; j++) {
            if(a[i]==a[j])flag=0;
        }
        if(flag)res++;
    }
    cout<<res<<endl;
    return 0;
}