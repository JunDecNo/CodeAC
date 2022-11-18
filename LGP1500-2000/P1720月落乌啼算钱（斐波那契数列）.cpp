#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double d=sqrt(5);
    int n;
    cin>>n;
    double fn=(pow((1+d)/2,n)-pow((1-d)/2,n))/d;
    printf("%.2f",fn);
    return 0;
}