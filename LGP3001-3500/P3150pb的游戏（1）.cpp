#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(((int)(s[s.size()-1]-'0'))%2)cout<<"zs wins"<<endl;
        else cout<<"pb wins"<<endl;
    }
    return 0;
}