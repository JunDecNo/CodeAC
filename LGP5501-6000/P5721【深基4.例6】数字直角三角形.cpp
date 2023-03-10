#include<iostream>
using namespace std;
int main(){
    int n,idx=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(idx<10){
                cout<<"0"<<idx;
            }
            else cout<<idx;
            idx++;
        }
        cout<<endl;
    }
    return 0;
}