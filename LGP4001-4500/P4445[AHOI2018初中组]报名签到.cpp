#include<iostream>
using namespace std;
int main(){
    int len;
    long int sum=0;
    cin>>len;
    int *arr=new int[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    for(int i=0;i<len-1;i++){
        sum+=max(arr[i],arr[i+1]);
    }
    cout<<sum<<endl;
    return 0;
}