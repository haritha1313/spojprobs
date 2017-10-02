#include <bits/stdc++.h>
using namespace std;
typedef pair <int,int> ipair;
#define INF 9999999
vector <int> dist(1050, INF);
void dijkstra(vector <ipair> adj[], int src)
{
	int u;
	priority_queue <ipair, vector<ipair>, greater<ipair> > pq;
	pq.push(make_pair(0,src));
	dist[src]=0;
	while(!pq.empty())
	{
		u=pq.top().second;
		pq.pop();
		for(int k=0;k<adj[u].size();k++)
		{
			int v=adj[u][k].first;
			int weight=adj[u][k].second;
			if(dist[v]>dist[u]+weight)
			{
				dist[v]=dist[u]+weight;
				pq.push(make_pair(dist[v],v));
			}
		}
	}
}

int main() {
	vector <ipair> adj[1050];
	int edges,a,b,w,src;
	cin>>edges;
	while(edges--)
	{
		cin>>a>>b>>w;
		adj[a].push_back(make_pair(b,w));
		adj[b].push_back(make_pair(a,w));
	}
	cin>>src;
	dijkstra(adj, src);
	int t,dest;
	cin>>t;
	while(t--)
	{
		cin>>dest;
		if(dist[dest]==9999999)
		cout<<"NO PATH\n";
		else
		cout<<dist[dest]<<"\n";
	}
	return 0;
}
