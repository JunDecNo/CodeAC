#include <algorithm>
#include <iostream>
using namespace std;

int gcd(int n,int m){
    if(m==0) return n;
    return gcd(m,n%m);
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int mind = min({a, b, c}), maxd = max({a, b, c});
    int gg=gcd(mind,maxd);
    printf("%d/%d", mind/gg, maxd/gg);
    return 0;
}