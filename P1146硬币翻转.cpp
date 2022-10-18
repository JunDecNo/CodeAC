#include<iostream>
using namespace std;

int main(){
    int x;
    scanf("%d",&x);
    cout<<x<<endl;
    string str(x,'0');
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(i!=j){//翻面
                str[j]=='0' ? str[j]='1' : str[j]='0';
            }
        }
        cout<<str<<endl;
    }
    return 0;
}