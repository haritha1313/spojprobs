#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long a[n],sum=0;
		for(i=0;i<n;i++)
			cin>>a[i];
		int x=1;
		for(i=1;i<n;i++)
		{
			sum+=(a[i]-a[i-1])*(n-x)*x;
			x++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
