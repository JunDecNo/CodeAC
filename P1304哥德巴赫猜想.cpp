#include<iostream>
using namespace std;

//判断是否为质数
bool isPrime(int n){
    if(n == 2)return true;
    if(n % 2 == 0)return false;
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0)return false;
    }
    return true;
}


int main(){
    int x;
    cin>>x;
    for(int i=4;i<=x;i+=2){
        for(int j=2;j<=i/2;j++){
            if(isPrime(j)&&isPrime(i-j)){
                cout<<i<<"="<<j<<"+"<<i-j<<endl;
                break;
            }
        }
    }
    return 0;
}