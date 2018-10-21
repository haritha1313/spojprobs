#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n,e,m,t,i,g[111][111];
	memset(g,32,sizeof(g));
	cin>>n>>e>>t>>m;
	for( i=0,g[e][e]=0;i<m;i++)
	{
		long long u,v,x;
		cin>>u>>v>>x;
		g[u][v]=x;
	}
	
	for(long long k=1; k<=n; k++)
		for( i=1; i<=n; i++)
			for(long long j=1; j<=n; j++)
				g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
		
		
		long k=0;		
	for( i=1,k=0; i<=n; i++)
		if(g[i][e] <= t)
			k++;
			
			cout<<k<<endl;
	return 0;
} 
