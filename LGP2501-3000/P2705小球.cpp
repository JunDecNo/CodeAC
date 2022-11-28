#include<iostream>
using namespace std;
int main(){
    int r,b,c,d,e;
    int k;
    cin>>r>>b>>c>>d>>e;
    if(r>b)k=0;
    else k=1;
    if(k){//红球比蓝球少
        int r1=2*r*e+(b-r)*d,r2=r*c+b*d;
        cout<<max(r1,r2);
    }else{
        int r1=2*b*e+(r-b)*c,r2=r*c+b*d;
        cout<<max(r1,r2);
    }
    return 0;
}