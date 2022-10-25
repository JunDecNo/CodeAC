#include<iostream>
using namespace std;
int main(){
    uint_fast64_t x,n,t=1;
    cin>>x>>n;
    for(uint_fast64_t i=0;i<n;i++){
        t+=t*x;
    }
    cout<<t<<endl;
    return 0;
}