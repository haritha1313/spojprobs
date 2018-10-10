#include<bits/stdc++.h>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<list>
#include<map>
#include<iomanip>
#include<cstdlib>
#include<cctype>

#define io ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

long long gcd(long long x, long long y)
{
	long long tmp;
	while(y!=0)
	{
		tmp = y;
		y = x % y;
		x = tmp;
	}
	return x;
}

int main()
{
	io
	while(1)
	{
		long long m,n,hcf,a,b;
		cin>>m>>n;
		if(m==-1 && n==-1)
			break;
		if(n&1)
		{
			a = (n/2)*(n/2);
		}
		else
			a=(n/2)*(n/2 - 1);
		b = (m*(m-1))/2;
		hcf = gcd(a,b);
		a/=hcf;
		b/=hcf;
		if(n>(2*m)-1 && n>2)
			cout<<"1"<<endl;
		if(n<=2)
			cout<<"0"<<endl;
		else
			cout<<a<<"/"<<b<<endl;
	}
	return 0;
}
