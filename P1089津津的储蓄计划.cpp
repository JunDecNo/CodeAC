#include<iostream>
using namespace std;

int main(){
	int month,total=0,once,save=0,i;
	for(i=0;i<12;i++){
		cin>>month;
		once=total+300-month;
		if(once<0){
			cout<<"-"<<(i+1)<<endl;
			return 0;
		}else{
			//大于100
			if(once>=100){
				save+=once/100;
				total=once%100;
			}else{//小于100 
				total=once;
			}
		}
	}
	cout<<save*120+total<<endl;
	return 0;
} 
