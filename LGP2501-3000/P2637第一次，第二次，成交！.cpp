#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,max=0,prise=0;
    cin>>n>>m;
    int *arr=new int[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for(int i=0;i<m;i++){
        int in=min(n,m-i);
        int tmp=arr[i]*in;
        if(max<tmp){
            max=tmp;
            prise=arr[i];
        }
    }
    cout<<prise<<" "<<max;
    return 0;
}