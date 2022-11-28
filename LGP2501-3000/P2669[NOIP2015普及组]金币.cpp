#include<iostream>
using namespace std;
int main(){
    int k,d=1,total=0;
    cin>>k;
    for(int i=1;i<=k;i++){
        int in=min(k-i+1,d);
        total+=d*in;
        i+=d-1;
        d++;
    }
    cout<<total;
    return 0;
}