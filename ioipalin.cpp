#include<stdio.h>
int n;
char str[5005];
int dp[2][5005];
int max(int a,int b)
{
	return a>b?a:b;
}
int findpalin()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(str[i-1]==str[n-j])
			dp[i%2][j]=dp[(i-1)%2][j-1]+1;
			else
			dp[i%2][j]=max(dp[(i-1)%2][j],dp[i%2][j-1]);
		}
	}
	return dp[n%2][n];
}

int main(void) {
	scanf("%d",&n);
	scanf("%s",&str);
	printf("%d\n",n-findpalin());
	return 0;
}

