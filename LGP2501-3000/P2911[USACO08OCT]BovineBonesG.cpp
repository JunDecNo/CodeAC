#include <iostream>
using namespace std;
int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int arr[81] = {0};
    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                arr[i+j+k]++;
            }
        }
    }
    int max=0,res=0;
    for(int i=0;i<=s1+s2+s3;i++){
        if(arr[i]>max){
            max=arr[i];
            res=i;
        }
    }
    cout<<res;
    return 0;
}