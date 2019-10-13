#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);	cin.tie(NULL);	cout.tie(NULL);
#define ll long long
#define INF -99999999
int arr[(ll)2e5];

struct info
{
	ll prefix;
	ll suffix;
	ll sum;
	ll ans;
};
typedef struct info INFO;

INFO st[(ll)2e5];

void build(ll node, ll beg, ll end)
{
	if(beg==end)
	{
	    st[node]={arr[beg],arr[beg],arr[beg],arr[beg]};
	    return;
	}
	ll mid=beg+(end-beg)/2;
	build(2*node,beg,mid);
	build(2*node+1,mid+1,end);
	st[node].prefix=max(st[2*node].prefix,st[2*node].sum+st[2*node+1].prefix);
	st[node].suffix=max(st[2*node+1].suffix,st[2*node].suffix+st[2*node+1].sum);
	st[node].sum=st[2*node].sum+st[2*node+1].sum;
	st[node].ans=max(max(st[2*node].ans,st[2*node+1].ans),st[2*node].suffix+st[2*node+1].prefix);
}

INFO query(ll node, ll beg, ll end, ll l, ll r)
{
	if(beg>=l && end<=r)
		return st[node];
	if(end<l || beg>r)
	{
		INFO e;
		return e={INF,INF,0,INF};
	}
	ll mid=beg+(end-beg)/2;
	INFO a= query(2*node,beg,mid,l,r);
	INFO b= query(2*node+1,mid+1,end,l,r);
	INFO e;
	e.prefix=max(a.prefix,a.sum+b.prefix);
	e.suffix=max(b.suffix,b.sum+a.suffix);
	e.sum=a.sum+b.sum;
	e.ans=max(max(a.ans,b.ans),a.suffix+b.prefix);
	return e;
}

void update(ll node, ll beg, ll end, ll idx, ll x)
{
	if(beg==end)
	{
		arr[idx]=x;
		st[node]={x,x,x,x};
		return;
	}
	ll mid=beg+(end-beg)/2;
	if(idx<=mid)
		update(2*node,beg,mid,idx,x);
	else 
		update(2*node+1,mid+1,end,idx,x);
	st[node].prefix=max(st[2*node].prefix,st[2*node].sum+st[2*node+1].prefix);
	st[node].suffix=max(st[2*node+1].suffix,st[2*node].suffix+st[2*node+1].sum);
	st[node].sum=st[2*node].sum+st[2*node+1].sum;
	st[node].ans=max(max(st[2*node].ans,st[2*node+1].ans),st[2*node].suffix+st[2*node+1].prefix);
}

int main()
{
	fast;
	ll n,m,c,x,y;
	cin>>n;
	for(ll i=1;i<=n;i++)
		cin>>arr[i];
	build(1,1,n);
	cin>>m;
	while(m--)
	{
		cin>>c>>x>>y;
		if(!c)
			update(1,1,n,x,y);
		else
			cout<<query(1,1,n,x,y).ans<<"\n";
	}
	return 0;
}
