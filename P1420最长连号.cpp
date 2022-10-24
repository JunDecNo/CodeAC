#include<iostream>
using namespace std;

int main(){
    int x,max=1,cnt=1;
    cin>>x;
    int *arr=new int[x];
    for (int i = 0; i < x; i++)cin>>arr[i];
    for(int i=1;i<x;i++){
        if(arr[i]-arr[i-1]==1){
            cnt++;
        }else{
            if(max<cnt)max=cnt;
            cnt=1;
        }
    }
    if(max<cnt)max=cnt;
    cout<<max<<endl;
    return 0;
}