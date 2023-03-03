#include<iostream>
using namespace std;
int main(){
    int arr,sum=0,len;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>arr;
        sum+=arr;
    }
    if(sum&1)cout<<"Alice";
    else cout<<"Bob";
    return 0;
}