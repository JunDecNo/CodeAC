#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    double total=a+0.1*b;
    cout<<(int)(total/1.9)<<endl;
    return 0;
}