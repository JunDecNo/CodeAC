#include<iostream>
using namespace std;
int flag[1001][1001];
int arr[1002],is[1002]={-1};
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int tmp;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>flag[i][j];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            // 按列进行添加
            tmp = flag[j][i];
            if(is[tmp-1]!=i){
                arr[tmp-1]++;
                is[tmp-1]=i;
            }
        }
    }
    for (int i = 0; i < k; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}