#include<iostream>
using namespace std;
int main(){
    int len;
    cin>>len;
    int *a=new int[len];
    for(int i=0;i<len;i++)cin>>a[i];
    for(int i=0;i<len;i++){
        int cnt=0;
        for(int j=0;j<i;j++){
            if(a[i]>a[j])cnt++;
        }
        cout<<cnt<<" ";
    }
    return 0;
}