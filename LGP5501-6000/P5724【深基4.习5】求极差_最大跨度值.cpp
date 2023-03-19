#include<iostream>
using namespace std;
int main(){
    int n,tmp;
    cin>>n;
    cin>>tmp;
    int max=tmp,min=tmp;
    for(int i=1;i<n;i++){
        cin>>tmp;
        if(max<tmp)max=tmp;
        else if(min>tmp)min=tmp;
    }
    cout<<max-min<<endl;
    return 0;
}