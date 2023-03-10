#include<iostream>
using namespace std;
int main(){
    int n,min=1001,tmp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(min>tmp)min=tmp;
    }
    cout<<min<<endl;
    return 0;
}