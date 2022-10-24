#include <iostream>
using namespace std;

int main(){
    int len,total=0,once,flag=0,line;
    cin>>len;
    line=len;
    while(total!=len*len){
        cin>>once;
        for(int i=0;i<once;i++){
            cout<<flag;
            line--;
            if(line==0){
                cout<<endl;
                line=len;
            }
        }
        total+=once;
        flag=!flag;
    }
    return 0;
}