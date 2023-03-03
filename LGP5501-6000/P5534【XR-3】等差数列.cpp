#include<iostream>
using namespace std;
int main(){
    long long int a1,a2,n;
    cin>>a1>>a2>>n;
    long long int d = a2-a1;
    cout<<(n*a1)+n*(n-1)*d/2<<endl;
    return 0;
}