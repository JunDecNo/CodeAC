#include<iostream>
using namespace std;

int main(){
    int len,cnt=0;
    cin>>len;
    int arr[len];
    for (int i = 0; i < len; i++)cin>>arr[i];
    for(int i=1;i<len-1;i++){
        if(arr[i]<arr[i-1]&&arr[i]<arr[i+1])cnt++;
        else if(arr[i]==arr[i-1]){
            for(int j=i-2;j>=0;j--){
                if(arr[j]!=arr[i]){
                    if(arr[i]<arr[j]&&arr[i]<arr[i+1])cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}