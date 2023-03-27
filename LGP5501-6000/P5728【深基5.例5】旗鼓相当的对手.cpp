#include<iostream>
#include<cmath>
using namespace std;
int a[1001][3];
int main(){
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i][0];
        cin>>a[i][1];
        cin>>a[i][2];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[i][0]-a[j][0])<=5&&abs(a[i][1]-a[j][1])<=5&&abs(a[i][2]-a[j][2])<=5){
                if(abs(a[i][0]+a[i][1]+a[i][2]-a[j][0]-a[j][1]-a[j][2])<=10)cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}