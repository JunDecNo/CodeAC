#include<iostream>
using namespace std;
int main(){
    int idx=0;
    int len;
    char before=' ',now;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>now;
        if(now!=before)idx++;
        before=now;
    }
    cout<<idx+1<<endl;
    return 0;
}