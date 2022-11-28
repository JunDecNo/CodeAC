#include<iostream>
using namespace std;
int k;

int group(int n){
    if(n-k>1&&(n-k)%2==0)return group((n-k)/2)+group((n+k)/2);
    else return 1;
}

int main(){
    int n;
    cin>>n>>k;
    cout<<group(n);
    return 0;
}