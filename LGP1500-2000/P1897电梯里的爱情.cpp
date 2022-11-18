#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,before=0,time=0;
    cin>>n;
    int *arr=new int[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    sort(arr,arr+n);
    for (int i = 0; i < n; i++){
        
        if(arr[i]-before==0)time++;
        else{
            time += (arr[i]-before+1)*6;
        }
        before = arr[i];
    }
    time+=arr[n-1]*4;
    cout<<time<<endl;
    return 0;
}