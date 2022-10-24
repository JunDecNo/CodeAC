#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int el;
    cin>>el;
    if(el<=150)cout<<fixed<<setprecision(1)<<el*0.4463<<endl;
    else if(el<=400)cout<<fixed<<setprecision(1)<<150*0.4463+(el-150)*0.4663<<endl;
    else cout<<fixed<<setprecision(1)<<150*0.4463+250*0.4663+(el-400)*0.5663<<endl;
    return 0;
}