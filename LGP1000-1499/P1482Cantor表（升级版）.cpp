#include<iostream>
using namespace std;
//最大公约数
int gcd(int son,int mot){
    if(mot==0) return son;
    return gcd(mot,son%mot);
}
int main(){
    int a,b,c,d;
    scanf("%d/%d",&a,&b);
    scanf("%d/%d",&c,&d);
    int son=a*c,mot=b*d,g=gcd(son,mot);
    son = son/g;
    mot = mot/g;
    printf("%d %d",mot,son);
    return 0;
}