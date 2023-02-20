#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int len;
    cin>>len;
    int *a=new int[len],*b=new int[len];
    for(int i =0;i<len;i++)cin>>a[i];
    for(int i =0;i<len;i++)cin>>b[i];
    sort(a,a+len);
    sort(b,b+len);
    bool res=true;
    for(int i =0;i<len;i++){
        if(a[i]>b[i]){
            res=false;
            break;
        }
    }
    if(res)cout<<"DA";
    else cout<<"NE";
    return 0;
}