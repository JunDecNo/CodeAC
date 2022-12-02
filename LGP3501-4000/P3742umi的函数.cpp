#include<iostream>
#include<string>
using namespace std;
int main(){
    string x,y,z;
    int n;
    cin>>n;
    cin>>x;
    cin>>y;
    //f(x,z)=y;
    for(int i=0;i<n;i++){
        if(x[i]<y[i]){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<y;
    return 0;
}