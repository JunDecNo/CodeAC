#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int boy=0,girl=0;
    cin>>str;
    for (int i = 0; i < str.size()-2; i++){
        if((str[i]=='b')+(str[i+1]=='o')+(str[i+2]=='y')-1>=0){
            boy++;
        }
    }
    for (int i = 0; i < str.size()-3; i++){
        if((str[i]=='g')+(str[i+1]=='i')+(str[i+2]=='r')+(str[i+3]=='l')-1>=0){
            girl++;
        }
    }
    cout<<boy<<endl;
    cout<<girl<<endl;
    return 0;
}