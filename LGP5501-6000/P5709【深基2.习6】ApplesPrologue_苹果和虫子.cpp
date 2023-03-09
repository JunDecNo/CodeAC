#include<iostream>
using namespace std;
int main(){
    int m,t,s;
    cin>>m>>t>>s;
    if(!t)cout<<0<<endl;
    else{
        int x=s/t+(s%t!=0);
        cout<<max(m-x,0)<<endl;
    }
    return 0;
}