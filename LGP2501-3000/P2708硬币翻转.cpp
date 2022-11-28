#include<iostream>
#include<string>
using namespace std;
int main(){
    string st;
    int step=0;
    cin>>st;
    for(int i=st.size()-1;i>=0;i--){
        if(st[i]=='0'&&step%2==0)step++;
        else if(st[i]=='1'&&step%2)step++;
    }
    cout<<step;
    return 0;
}