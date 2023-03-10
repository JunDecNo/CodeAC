#include<iostream>
using namespace std;
int main(){
    int len,n=0;
    cin>>len;
    while(len>1){
        len/=2;
        n++;
    }
    cout<<n+1<<endl;
    return 0;
}