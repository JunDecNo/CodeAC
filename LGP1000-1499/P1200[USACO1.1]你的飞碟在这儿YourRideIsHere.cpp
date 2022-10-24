#include<iostream>
#include<string>
using namespace std;

int GetNum(string str){
    int res=1;
    for(int i=0;i<str.size();i++){
        res*=(str[i]-'A')+1;
    }
    return res % 47;
}

int main(){
    string ufo,hux;
    cin>>hux>>ufo;
    if(GetNum(hux)==GetNum(ufo))cout<<"GO"<<endl;
    else cout<<"STAY"<<endl;
}