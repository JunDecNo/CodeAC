#include<iostream>
using namespace std;
int main(){
    int n,k;
    double a=0,b=0;
    int an=0,bn=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            a+=i;
            an++;
        }
        else {
            b+=i;
            bn++;
        }
    }
    printf("%.1f %.1f",a/an,b/bn);
    return 0;
}