#include<iostream>
using namespace std;
int main(){
    int len,happy=0,res=0;
    int a,b;
    cin>>len; 
    for (int i = 0; i < len; i++){
        cin>>a>>b;
        happy=happy+a+b-8;
        res+=happy;
    }
    cout<<res<<endl;
    return 0;
}