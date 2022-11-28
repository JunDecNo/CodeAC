#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        if(((int)(x[x.size()-1]-'0'))%2)cout<<"odd"<<endl;
        else cout<<"even"<<endl;
    }
    return 0;
}