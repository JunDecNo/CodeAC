#include<iostream>
#include <iomanip>
#define pi 3.14159265358979323
using namespace std;
int main(){
    double r;
    cin>>r;
    cout<<fixed<<setprecision(6)<<(pi*r*r)<<endl;
    cout<<fixed<<setprecision(6)<<(2*r*r)<<endl;
    return 0;
}