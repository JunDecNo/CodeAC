#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N,B,cnt=0;
    cin>>N>>B;
    int *arr=new int[N];
    for(int i=0;i<N;i++)cin>>arr[i];
    sort(arr,arr+N);
    for(int i=N-1;i>=0;i--){
        B-=arr[i];
        cnt++;
        if(B<=0){
            cout<<cnt;
            break;
        }
    }
    return 0;
}