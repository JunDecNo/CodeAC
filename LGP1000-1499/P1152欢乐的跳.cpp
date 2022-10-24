#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int len;
    cin>>len;
    int arr[len],res[len];
    for (int i = 0; i < len; i++){
        cin>>arr[i];
    }
    for (int i = 1; i < len; i++){
        res[i]=abs(arr[i]-arr[i-1]);
    }
    sort(res+1,res+len);
    for(int i=1;i<len;i++){
        if(res[i]!=i){
            cout<<"Not jolly"<<endl;
            return 0;
        }
    }
    cout<<"Jolly"<<endl;
    return 0;
}