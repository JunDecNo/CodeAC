#include <stdio.h>
using namespace std;
int main() {
    //(每一科的满分之和*3-每一科的实际得分之和*2)÷每科所扣除分数的和
    int len;
    int total, idx;
    double sum=0,idx_sum=0,div=0;
    scanf("%d",&len);
    for (int i = 0; i < len; i++) {
        scanf("%d",&total);
        sum+=total;
    }
    for (int i = 0; i < len; i++) {
        scanf("%d",&idx);
        idx_sum += idx;
    }
    printf("%0.6f",(sum*3-idx_sum*2)/(sum-idx_sum));
    return 0;
}