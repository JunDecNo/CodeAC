#include<stdio.h> 
int main(){
	int bx,by,hx,hy;
	double dp[21][21]={0};
	int stop[21][21]={0};
	scanf("%d%d%d%d",&bx,&by,&hx,&hy);
	if(hx>=0&&hy>=0)stop[hx][hy]=1;
	if(hx-2>=0&&hy-1>=0)stop[hx-2][hy-1]=1;
	if(hx-2>=0&&hy+1>=0)stop[hx-2][hy+1]=1;
	if(hx+2>=0&&hy-1>=0)stop[hx+2][hy-1]=1;
	if(hx+2>=0&&hy+1>=0)stop[hx+2][hy+1]=1;
	if(hx-1>=0&&hy+2>=0)stop[hx-1][hy+2]=1;
	if(hx-1>=0&&hy-2>=0)stop[hx-1][hy-2]=1;
	if(hx+1>=0&&hy+2>=0)stop[hx+1][hy+2]=1;
	if(hx+1>=0&&hy-2>=0)stop[hx+1][hy-2]=1;
	if(stop[0][0]){
		printf("0");return 0;
	}
	else dp[0][0]=1;
	for(int i=1;i<=bx;i++){
		if(stop[i][0]==0&&dp[i-1][0]==1)dp[i][0]=1;
	}
	for(int j=1;j<=by;j++){
		if(stop[0][j]==0&&dp[0][j-1]==1)dp[0][j]=1;
	}  
	for(int i=1;i<=bx;i++){
		for(int j=1;j<=by;j++){
			if(stop[i][j]==0)dp[i][j]=dp[i-1][j]+dp[i][j-1];
			else dp[i][j]=0;
		}
	} 
	printf("%.0f",dp[bx][by]);
} 
