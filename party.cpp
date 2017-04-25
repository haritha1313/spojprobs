#include <iostream>
using namespace std;
void knapsack(int n, int W, int wt[], int val[])
{
	int K[n+1][W+1];
	for(int i=0;i<=n;i++)
	{
		for(int x=0;x<=W;x++)
		{
			if(i==0||x==0)
			K[i][x]=0;
			else
			if(wt[i-1]>x)
			K[i][x]=K[i-1][x];
			else
			K[i][x]=max(val[i-1]+K[i-1][x-wt[i-1]],K[i-1][x]);
		}
		
	}
	int ans=-1;
	for(int i=1;i<=W;i++)
	{
		if(K[n][i]==K[n][W])
		{
			ans=i;
			break;
		}
	}
	cout<<ans<<" "<<K[n][W]<<"\n";
	 
	
}

int main() {
	int W,n;
	cin>>W>>n;
	
	while(!(W==0&&n==0))
	{
		int wt[n],val[n];
		for(int i=0;i<n;i++)
		{
			cin>>wt[i]>>val[i];
		}
		knapsack(n,W,wt,val);
		cin>>W>>n;
		
	}
	return 0;
}
