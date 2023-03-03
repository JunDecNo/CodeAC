#include<iostream>
using namespace std;
int main(){
    // x x+k ... x+6k 52 = 7x + 21k 
    int n;
    int res1,res2;
    cin>>n;
    int sum = n/52;
    for(int k=1;k<sum;k++){
        int tmp = sum-21*k;
        if(tmp%7==0&&tmp/7<=100){
            res1=tmp/7;
            res2 = k;
            break; 
        }
    }
    cout<<res1<<endl;
    cout<<res2<<endl;
    return 0;
}