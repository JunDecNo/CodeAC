#include<iostream>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[101];
    int sum=0,cnt=0;
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    while (sum<n){
        sum+=m;
        for(int j=0;j<k;j++){
            if(sum==arr[j]){
                m++;
            }
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}