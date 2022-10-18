#include<stdio.h>
#include<malloc.h>

int main(){
	int len,cnt=0;
	scanf("%d",&len);
	int *arr=(int *)malloc(sizeof(int)*len+1);
	int *res=(int *)malloc(sizeof(int)*len);
	for(int i=1;i<=len;i++)scanf("%d",&arr[i]);
	for(int i=2;i<=len;i++){
		arr[0]=arr[i];
		int j; 
		for(j=i-1;arr[0]<arr[j];j--){
			arr[j+1]=arr[j]; 
		}
		arr[j+1]=arr[0];
	}
	for(int i=1,j=0;i<=len;i++){	
		if(arr[i]==res[j-1])continue;
		else{
			res[j]=arr[i];
			j++;cnt++;
		}
	}
	printf("%d\n",cnt);
	for(int i=0;i<cnt;i++)printf("%d ",res[i]);
}
