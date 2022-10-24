#include<stdio.h>
#include<malloc.h>
int main(){
	int len,cnt,sum=0;
	scanf("%d%d",&len,&cnt);
	int *arr=(int *)malloc(sizeof(int)*cnt*2);
	int *all=(int *)malloc(sizeof(int)*len+1);
	for(int i=0;i<=len;i++)all[i]=0;
	for(int i=0;i<cnt*2;i++)scanf("%d",&arr[i]);
	for(int i=0;i<cnt*2;i+=2){
		for(int j=arr[i];j<=arr[i+1];j++)all[j]=1;
	}
	for(int i=0;i<=len;i++){
		if(all[i]==0)sum++;
	}
	printf("%d",sum);
	return 0;
} 
