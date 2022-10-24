#include<iostream>
using namespace std;
char chars[2000000]={0};
int main(){
    int n,t,i,j;
    double a;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>t;
        for(j=1;j<=t;j++){
            chars[(int)(a*j)]==0?chars[(int)(a*j)]=1:chars[(int)(a*j)]=0;
        }
    }
    for(i=0;i<2000000;i++){
        if(chars[i]==1)cout<<i<<endl;
    }
    return 0;
}