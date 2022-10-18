#include<stdio.h>

int main(){
	int k;
	scanf("%d",&k);
	double x=1,mom=0,sum=0;
	while(1){
		mom+=1;
		sum+=x/mom;
		if(sum>k){
			printf("%d",int(mom));
			break; 
		}
	}
	return 0;
} 
