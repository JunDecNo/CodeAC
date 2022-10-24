#include<stdio.h>

int isPrime(int num){
	for(int i=2;i<=num/2;i++){
		if(num%i==0)return 0;
	}
	return 1;
}

int main(){
	int num,res;
	scanf("%d",&num);
	if(isPrime(num))printf("%d",num);
	else{
		for(int i=2;i<num/2;i++){
			if(isPrime(i)&&num%i==0){
				res=num/i;break; 
			}
		}	
		printf("%d",res);	
	}
	return 0;
}
