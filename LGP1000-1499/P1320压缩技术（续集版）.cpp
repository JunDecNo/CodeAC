#include<iostream>
#include<string>
using namespace std;

int main(){
    string str,temp;
    cin>>str;
    char flag='0';
    int len=str.size(),cnt=0;
    for (int i = 1; i < len; i++){
        cin>>temp;
        str.append(temp);
    }
    cout<<len<<" ";
    for(int i=0;i<str.size();i++){
        if(str[i]==flag)cnt++;
        else{
            cout<<cnt<<" ";
            cnt=1;
            flag=='0'?flag='1':flag='0';
        }
    }
    cout<<cnt;
    return 0;
}