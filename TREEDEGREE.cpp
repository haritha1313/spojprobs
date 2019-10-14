#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,i;
		cin>>n;
		long long size=2*n;
		long long a[size];
		for(i=0;i<size;i++)
		{
			cin>>a[i];
		}
		long long freq[n+1]={0};
		stack<long long > s;
		s.push(a[0]);
		for(i=1;i<size;i++)
		{
			if(a[i]==s.top())
			{
				s.pop();
			}
			else
			{
				freq[s.top()]++;
				s.push(a[i]);
				freq[s.top()]++;
			}
		}
		long long ans=INT_MIN;
		for(i=1;i<=n;i++)
		{
			ans=max(ans,freq[i]);
		}
		cout<<ans<<endl;
		
	}
}
