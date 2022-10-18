#include<iostream>
using namespace std;
int main(){
    int a,b;
    int num,max=0;
    for (int i = 0; i < 7; i++){
        cin >> a >> b;
        if(a+b>max){
            max=a+b;
            num=i+1;
        }
    }
    if(max>8){
        cout << num;
    }else{
        cout << 0;
    }
    return 0;
}