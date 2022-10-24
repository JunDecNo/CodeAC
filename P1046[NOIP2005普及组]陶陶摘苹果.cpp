#include<stdio.h>

int main(){
	int arr[10],height,sum=0;
	for(int i=0;i<10;i++)scanf("%d",&arr[i]);
	scanf("%d",&height);
	for(int i=0;i<10;i++){
		if(height+30>=arr[i])sum++;
	}
	printf("%d",sum);
	return 0;
}
