#include <bits/stdc++.h>
using namespace std;
int eggdrop(int n,int k)
{
	int eggarr[n+1][k+1];
	for(int i=1;i<=k;i++)
	{
		eggarr[1][i]=i;
	}
	for(int i=1;i<=n;i++)
	{
		eggarr[i][0]=0;
		eggarr[i][1]=1;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=k;j++)
		{
			eggarr[i][j]=INT_MAX;
			for(int x=1;x<=j;x++)
			{
				int res=1+max(eggarr[i-1][x-1],eggarr[i][j-x]);
				if(res<eggarr[i][j])
					eggarr[i][j]=res;
			}
		}
	}
	return eggarr[n][k];
}

int main() {
	int t,x,m,b;
	cin>>t;
	while(t--)
	{
		cin>>x>>m>>b;
		cout<<x<<" "<<eggdrop(m,b)<<"\n";
	}
	return 0;
}
