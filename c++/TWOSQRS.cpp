#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	ll n;
	bool ok;
	while(t--)
	{
		cin>>n;
		ok=false;
		for(ll i=0;i*i<=n;i++)
		{
			if(ceil(sqrt(n-i*i))==floor(sqrt(n-i*i)))
			{
				ok=true;
				break;
			}
		}
		ok?cout<<"Yes\n":cout<<"No\n";
	}
	return 0;
}
