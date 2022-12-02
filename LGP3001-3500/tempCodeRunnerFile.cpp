#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    for(int i=0;i<m;i++){
        cin>>k;
        cout<<arr[k-1]<<endl;
    }

    return 0;
}