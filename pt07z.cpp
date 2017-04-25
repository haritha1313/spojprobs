#include <bits/stdc++.h>
using namespace std;
int total=0;
int visited[10000009]={0};
int dfs(int s,vector <int> adj[])
{
	visited[s]=1;
	int m, m1=-1,m2=-1;
	for(int i=0;i<adj[s].size();i++)
	{
		if(visited[adj[s][i]]==0)
		{
			m=dfs(adj[s][i],adj);
			if(m>=m1)
			{
				m2=m1;
				m1=m;
			}
			else if(m>m2)
			m2=m;
		}
	}
	//cout<<m1<<" "<<m2<<" ";
	total=max(total,(m1+m2+2));
	return (m1+1);
}


int main() {
	int n,u,v;
	cin>>n;
	vector<int> adj[n+9];
	
	for(int i=0;i<n-1;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,adj);
	cout<<total<<"\n";
	return 0;
}
