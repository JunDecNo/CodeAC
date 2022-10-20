#include<iostream>
using namespace std;
int convert(int number){
    int res=0;
    while (number){
        res=res*10+number%10;
        number/=10;
    }
    return res;
}
int main(){
    int number;
    cin>>number;
    cout<<convert(number)<<endl;
    return 0;
}