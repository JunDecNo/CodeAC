#include<iostream>
using namespace std;
int main(){
    int s,x;
    cin>>s>>x;
    double swim=7;
    while(s-x>0){
        s-=swim;
        swim*=0.98;
    }
    swim+x-s>2*x?cout<<"n"<<endl:cout<<"y"<<endl;
    return 0;
}