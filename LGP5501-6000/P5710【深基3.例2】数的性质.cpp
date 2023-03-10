#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    bool one=(x%2==0),two=(x>4&&x<=12);
    cout<<(one&&two)<<" "<<(one||two)<<" "<<((!one&&two)||(one&&!two))<<" "<<(!one&&!two)<<endl;
    return 0;
}