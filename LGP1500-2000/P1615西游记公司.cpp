#include<iostream>
using namespace std;
int main(){
    int h,m,s,can;
    scanf("%d:%d:%d",&h,&m,&s);
    int zbj=h*3600+m*60+s;
    scanf("%d:%d:%d",&h,&m,&s);
    int swk=h*3600+m*60+s;
    cin>>can;
    double num=(swk-zbj)*1.0*can;
    printf("%.0f",num);
    return 0;
}