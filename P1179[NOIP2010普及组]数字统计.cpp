#include<iostream>
using namespace std;
//返回2的个数
int DuoNum(int number){
    int cnt=0;
    while(number){
        if(number%10==2)cnt++;
        number/=10;
    }
    return cnt;
}


int main(){
    int left,right,all=0;
    cin>>left>>right;
    for(int i=left;i<=right;i++){
        all+=DuoNum(i);
    }
    cout<<all<<endl;
    return 0;
}