#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isValid(string s) {
    vector<char>v;
    for(char ch:s){
        if(ch=='('||ch=='['||ch=='{'){
            v.push_back(ch);
        }
        else{
            if(v.empty())return false;
            char tmp=v.back();
            v.pop_back();   
            if(tmp+1!=ch&&tmp+2!=ch)return false;
        }
        
    }
    if(!v.empty())return false;
    return true;
}

int main(){
    string s;
    cin>>s;
    cout<<isValid(s)<<endl;
    return 0;
}