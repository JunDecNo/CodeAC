#include<iostream>
using namespace std;
int func(int x){
    if(x==1){
        cout<<1<<" ";
        return 1;
    }
    else if(x%2==0){
        func(x/2);
    }
    else{
        func(x*3+1);
    }   
    cout<<x<<" ";
}
int main(){
    int x;
    cin>>x;
    func(x);
    return 0;
}