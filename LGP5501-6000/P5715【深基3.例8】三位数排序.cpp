#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x=min(a,min(b,c)),z=max(a,max(b,c)),y=a+b+c-x-z;
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}