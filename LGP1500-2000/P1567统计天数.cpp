#include<iostream>
using namespace std;
int main(){
    int len,cnt=1,max=0;
    int num,today;
    cin>>len>>num;
    for(int i=1;i<len;i++){
        cin>>today;
        if(today>num){
            cnt++;
        }else cnt=1;
        num=today;
        if(cnt>max)max=cnt;
    }
    cout<<max;
    return 0;
}