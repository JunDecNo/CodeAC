#include<iostream>
#include<string>
using namespace std;
const int fac[]={1,1,2,6,24,120,720,5040,40320,362880};
int main(){
    int n,cnt=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++){
        char tmp=str[i];
        for(int j=i+1;j<n;j++){
            if(tmp>str[j]){
                cnt+=fac[n-i-1];
            }
        }
    }
    cout<<cnt+1;
    return 0;
}