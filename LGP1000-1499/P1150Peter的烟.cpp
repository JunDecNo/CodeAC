#include<iostream>
using namespace std;

int main(){
    int n,k,d=0,all=0;
    cin>>n>>k;
    while(n!=0){
        d++;
        n--;
        all++;
        if(d>=k){
            d=0;
            n++;
        }
    }
    cout<<all<<endl;
    return 0;
}