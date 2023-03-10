#include<iostream>
using namespace std;
int rn(int y){
	return y%400==0||y%4==0&&y%100!=0;
} 
int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int n,y;
	cin>>n>>y;
	if(rn(n))
		m[2]=29;
	cout<<m[y];
	return 0;
}