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

bool cmp(const pair<int, pair<int, int> >&i, const pair<int, pair<int, int> >&j)
{
	 if (i.F == j.F)
  		return i.S.F < j.S.F;
 	return i.F > j.F;
}

int main()
{
	_
	int n,c;	cin>>n>>c;
 	vector < pair<int, pair<int, int> > > a(n);
	map<int, int> m;
	fr(i, 0, n) 
	{
	  	int s;	cin>>s;
	  	if (!m.count(s))
	   		m[s] = i;
  		a[m[s]].S.F = m[s];
  		a[m[s]].S.S = s;
  		a[m[s]].F++;
 	}

 	sort(a.begin(), a.end(), cmp);

 	fr(i, 0, n)
  	for (int j = 0; j < a[i].F; j++) 
   			cout<<a[i].S.S<<" ";

	return 0;
}

