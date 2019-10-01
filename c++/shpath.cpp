#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define size (int)1e4+5
#define pb push_back
map<string,int> mp;
map<pii,int> ans;
vector<pii> g[size];

void reset()
{
	for(int i=0;i<size;i++)
		g[i].clear();
	mp.clear();
	ans.clear();
}

int SHPATH(int start, int end)
{
	vector<int> dist (size,99999999);
	priority_queue <pii,vector<pii>, greater<pii>> q;
	dist[start]=0;
	q.push(pii(0,start));
	while(!q.empty())
	{
		int u=q.top().second;
		int c=q.top().first;
		q.pop();
		for(auto it: g[u])
		{
			int v=it.first;
			int w=it.second;
			if(dist[v]>dist[u]+w)
			{
				dist[v]=dist[u]+w;
				q.push(pii(dist[v],v));
			}
		}
	}
	return dist[end];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t,n,p,v,w,r;
	string s,str1,str2;
	cin>>t;
	while(t--)
	{
		reset();
		cin>>n;
		for(int i=1;i<=n;i++)
		{
		    cin>>s;
			mp[s]=i;
			cin>>p;
			while(p--)
			{
				cin>>v>>w;
				g[i].pb(pii(v,w));
				g[v].pb(pii(i,w));
			}
		}
		cin>>r;
		while(r--)
		{
			cin>>str1>>str2;
			pii p=pii(mp[str1],mp[str2]);
			if(ans.count(p)==0)
				ans[p]=SHPATH(p.first,p.second);
			cout<<ans[p]<<"\n"; 
		}
	}
	return 0;
}
