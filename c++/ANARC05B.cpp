#include <bits/stdc++.h>
using namespace std;

#define _ 					ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll					long long
#define ld					long double
#define pb					push_back
#define mp					make_pair
#define F					first
#define S 				    second

#define PI					acos(-1.0)
#define E					exp(1.0)



#define fr(i,a,b)			for(int i=a; i<b; i++)
#define fr1(i,a,b)			for(int i=a; i<=b; i++)
#define rev(i,a,b)			for(int i=b; i>=a; i--)
#define foreach(c,i)        for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define FiLL(A, n, val)     for(int i=0; i<n; i++)	A[i] = val
#define all(x)				x.begin(), x.end()
#define apresent(c,x) 		(find(all(c),x) != (c).end())
#define T()					int tc;	cin>>tc;	while(tc--)


#define max(a,b)			((a)>(b)?(a):(b))
#define min(a,b)			((a)<(b)?(a):(b))


ll gcd(ll x, ll y) {return y == 0 ? x : gcd(y, x % y);}
ll power(ll x,ll y){ll temp = 1 ;while(y>0){if(y&1) temp = (temp*x);x*=x;y/=2;}return temp;}
ll DigitSum(ll n) {ll temp = 0; n = abs(n); while(n){temp += (n%10); n/=10; } return temp;}
inline ll modexp(ll a,ll b,ll m) { ll d=1; while(b>0) { if(b&1) d=(d*a)%m; a=(a*a)%m; b=b>>1; } return d; }


#define INF                 INT_MAX
#define LINF                LONG_LONG_MAX
#define MAX                 100007
#define MOD                 1000000007

int main()
{
	_
	int n,m;
	while(1)
	{
		cin>>n;
		if(n == 0)
			break;
		int a[n];
		fr(i, 0, n)	cin>>a[i];
		cin>>m;
		int b[m];
		fr(i, 0, m)	cin>>b[i];
		int i=0, j=0;
		ll res = 0, sa = 0, sb = 0;
		while(1)
		{
			if(i<n && j<m && a[i] < b[j])
			{
				sa += a[i];
				i++;
			}
			if(i<n && j<m && a[i] > b[j])
			{
				sb += b[j];
				j++;
			}
			if(i<n && j<m && a[i] == b[j])
			{
				res += max(sa + a[i], sb + b[j]);
				sa = 0;
				sb = 0;
				i++;
				j++;
			}
			if(i>=n && j>=m)
				break;
			if(i>=n)
			{
				while(j<m)
				{
					sb += b[j];
					j++;
				}
				res += max(sa, sb);
			}
			else if(j>=m)
			{
				while(i<n)
				{
					sa += a[i];
					i++;
				}
				res += max(sa, sb);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
