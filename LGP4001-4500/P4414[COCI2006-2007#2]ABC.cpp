#include<iostream>
using namespace std;
int main(){
    int a,b,c,sum,aa,bb,cc;
    string str;
    cin>>a>>b>>c;
    cin>>str;
    sum = a+b+c;
    aa = min(min(a,b),c);
    cc = max(max(a,b),c);
    bb = sum-aa-cc;
    for (int i = 0; i < 3; i++){
        if(str[i]=='A')cout<<aa<<" ";
        else if(str[i]=='B')cout<<bb<<" ";
        else cout<<cc<<" ";
    }
    return 0;
}