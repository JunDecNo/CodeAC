#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,res=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='V'&&s[i+1]=='K'){
            res++;
            s[i]='X';
            s[i+1]='X';
        }
    }
    for(int i=0;i<s.size()-1;i++)
        if((s[i]=='K'&&s[i+1]=='K')||(s[i]=='V'&&s[i+1]=='V')){
            res++;
            break;
        }
    cout<<res;
    return 0;
}